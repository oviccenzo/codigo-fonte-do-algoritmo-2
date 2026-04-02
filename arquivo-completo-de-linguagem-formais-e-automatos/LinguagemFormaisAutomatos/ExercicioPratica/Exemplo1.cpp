//
// Created by Robert L Resende on 07/06/25.
//
#include <cstdio>
#include <cstdlib>
#include "cstring"

char palavra[100];
int controle = 0;
int tamanho = 0;

void q1();
void q2();
void qf();
void qErro();

int main(){
    printf("Ler palavra: ");
    scanf("%s", palavra);

    while(palavra[tamanho] != 0){
        tamanho += 1;
    }

    printf("\nPalavra lida: %s",palavra);
    printf("\nTamanho da palavra: %d",tamanho);
    q1();
}

void q1(){
    printf("\nq1");
    if(controle < tamanho){
        if(palavra[controle] == 'a'){
            controle += 1;
            qf();
        } else if(palavra[controle] == 'b'){
            controle += 1;
            q2();
        } else{
            qErro();
        }
    } else{
        qErro();
    }
}

void q2(){
    printf("\nq2");
    if(controle < tamanho){
        if(palavra[controle] == 'a'){
            controle += 1;
            q1();
        } else if(palavra[controle] == 'b'){
            controle += 1;
            qf();
        } else{
            qErro();
        }
    } else{
        qErro();
    }
}

void qf(){
    printf("\nqf");
    if(controle < tamanho){
        if(palavra[controle] == 'a'){
            controle += 1;
            qf();
        } else if(palavra[controle] == 'b'){
            controle += 1;
            qf();
        } else{
            qErro();
        }
    } else{
        printf("\nPalavra aceita");
    }
}

void qErro(){
    printf("\nqErro");
    printf("\nPalavra não aceita");
}