//19/11/2023
//Exemplo 4:
#include <cstdio>
#define M 5  //Constante: numero maximo de elementos do vetor
int A[M];   //Parametrizacao: o tamanho do vetor e M.a[] e uma varivel global

void fleitura() //Faz a leitura do vetor a, que e global
{
    int i;
    printf("Digite os %d elementos inteiros: \n",M);
    for(i = 0 ; i < M; i++)
        scanf("%d ",&A[i]);
}

int fsoma() //retorna a soma dos elementos lidos
{
    int soma, i;
    soma = 0;
    for( i = 0; i < M; i++)
        soma = soma + A[i];
    return soma;
}
void fimprime() //imprime um elemento do vetor por linha
{
    int i;
    printf("\nElementos do Vetor: \n");
    for( i = 0; i < M; i++)
        printf("%d\n", A[i]);
}
int main()
{
    fleitura(); //chamando funcao  leitura
    printf("\nA soma dos elementos e %d\n",fsoma()); //chamado fsoma
    fimprime();
    return 0;
}