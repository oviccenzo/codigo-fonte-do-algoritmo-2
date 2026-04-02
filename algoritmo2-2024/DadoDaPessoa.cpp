//19/11/2023
//O programa usa a funcao struct pessoa trabalho e idade
//Exemplo 2:
#include <cstdio>
#include <cstring>
struct pessoa{ //definicao do tipo pessoa
    int idade;
    char trabalha[4];
    char estuda[4];
};

int main()
{
    struct pessoa A,B;
    A.idade = 18;
    strcpy(A.trabalha,"SIM");
    strcpy(A.estuda , "NAO");
    B = A; //varivel B recebe todos os campos de A
    printf("Pessoa A: %d %s %s \n",A.idade,A.trabalha,A.estuda);
    printf("Pessoa B: %d %s %s \n",B.idade,B.trabalha,B.estuda);

    getchar();
    return 0;
}