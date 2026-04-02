//
// Created by Robert L Resende on 24/11/24.
//
#include "cstdio"
#include "cstring"

int strcmp(char s1[], char s2[]){
    int i = 0;
    while(1){
        if(s1[i] == NULL && s2[i] == NULL)
            return 0;
        else if(s1[i] == NULL)
            return -1;
        else if(s2[i] == NULL)
            return 1;
        else if(s1[i] < s2[i])
            return -1;
        else if(s1[i] > s2[i])
            return 1;
        else
            ++i;
    }
}



int main(void){

    char palavra1[100], palavra2[100];
    int resultado;

    printf("Entre com uma palavra: ");
    gets(palavra1);
    printf("Entre outra palavra: ");
    gets(palavra2);

    resultado = strcmp(palavra1,palavra2);

    if(resultado == 0){
        printf("igual\n");
    } else if(resultado > 0){
        printf("o primeiro e maior\n");
    } else{
        printf("o segundo e maior\n");
    }
}