//18/11/2023
//Parte 9
//Manipulacao de Strings
//A funcao gets()
//Exemplo 1:
#include <cstdio>
#include "cstring"
int main()
{
    char string[100];
    printf("Digite o seu nome: \n");
    gets(string);
    printf("\n\nOla %s\n",string);
    return (0);
}