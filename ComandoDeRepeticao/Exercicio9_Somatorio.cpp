//
// Created by Robert L Resende on 16/10/24.
//
#include <cstdio>

int fSoma1(int n){
    int soma = 0;
    for(int i = 1; i <= n; i++){
        soma = soma  + i;
    }
    return soma;
}

int main(){

    int n;

    printf("digite um numero de n: ");
    scanf("%d",&n);

    int resultado = fSoma1(n);

    printf("a soma s = 1 + 2 + ... + %d e: %d\n",n,resultado);

    return 0;
}