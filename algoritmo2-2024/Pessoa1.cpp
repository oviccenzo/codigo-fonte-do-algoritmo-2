//
// Created by Robert L Resende on 30/10/24.
//
#include <cstdio>
#include "cstdlib"

struct pessoa{

    int idade;
    char trabalha,estuda;
};

int main(){

    struct pessoa A, N;
    A.idade = 18;
    A.trabalha = 'sim';
    A.estuda = 'nao';
    N = A;
    printf("Pessoa A: %d\n",A.idade);
    printf("Pessoa A: %c\n",A.trabalha);
    printf("Pessoa A: %c\n",A.estuda);

    printf("Pessoa B: %d\n",N.idade);
    printf("Pessoa B: %c\n",N.trabalha);
    printf("Pessoa B: %c\n",N.estuda);
}