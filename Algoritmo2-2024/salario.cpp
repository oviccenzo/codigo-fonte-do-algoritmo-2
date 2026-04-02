//
// Created by Robert L Resende on 28/10/24.
//
#include <cstdio>
#include "cstdlib"

struct salario{

    int valor;

};

int main(){

    struct salario A,M;
    printf("digite o salario A: ");
    scanf("%d",&A.valor);

    printf("digite o salario M: ");
    scanf("%d",&M.valor);

    int soma = A.valor * M.valor;

    printf("o salario A e %d \n",soma);
    printf("o salario B e %d \n",soma);


}