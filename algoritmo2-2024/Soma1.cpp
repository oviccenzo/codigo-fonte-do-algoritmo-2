//
// Created by Robert L Resende on 24/11/24.
//
#include "cstdio"



int main(){

    int a,b;
    int soma[3];

    //soma 1
    printf("Digite o primeiro numero: \n");
    scanf("%d",&a);
    printf("Digite o segundo numero: \n");
    scanf("%d",&b);
    soma[0] = a+b;

    //soma 2
    printf("Digite o terceiro numero do vetor: \n");
    scanf("%d",&a);
    printf("Digite o quarto numero do vetor: \n");
    scanf("%d",&b);
    soma[1] = a+b;

    //soma 3
    printf("Digite o quinto numero do vetor: \n");
    scanf("%d",&a);
    printf("Digite o sexto numero do vetor: \n");
    scanf("%d",&b);
    soma[2] = a+b;

    //A soma dos tres vetores
    printf("A soma 1: %d\n",soma[0]);
    printf("A soma 2: %d\n",soma[1]);
    printf("A soma 3: %d\n",soma[2]);
}
