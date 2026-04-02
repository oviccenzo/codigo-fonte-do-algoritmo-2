//
// Created by Robert L Resende on 29/05/25.
//
#include "cstring"
#include "cstdio"
#include "cstdlib"

char palavra[100];
int controle = 0;
int tamanho = 0;

void q0();
void q1();
void q2();
void qf();
void qErro();

int main(){

}

void q0(){
    printf("\nq0");
    if(controle < tamanho){
        if (palavra[controle] == 'a'){
            controle +=1;
            q1();
        } else if (palavra[controle] == 'b'){
            controle += 1;
            q2();
        } else{
            qErro();
        }
    }
}

void q1();