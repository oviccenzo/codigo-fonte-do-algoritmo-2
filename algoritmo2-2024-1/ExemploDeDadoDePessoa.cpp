//
// Created by Robert L Resende on 28/10/24.
//
#include "cstdio"
#include "cstdlib"

struct pessoa{
    int idade;
    char trabalha, estuda;
};

int main(){

    struct pessoa P;

    printf("digite a idade da pessoa: \n");
    scanf("%i", &P.idade);
    getc(stdin);

    printf("pessoa trabalha(sim/nao): \n");
    scanf("%c", &P.trabalha);
//    fgets(&P.trabalha, 10, stdin);

//    getchar();

    printf("a pessoa estuda (sim/nao): \n");
    scanf("%c", &P.estuda);
    fgets(&P.estuda, 10, stdin);

    printf("A idade: %d\n", P.idade);
    printf("O estuda: %c\n", P.trabalha);
    printf("O trabalho: %c\n", P.estuda);

}