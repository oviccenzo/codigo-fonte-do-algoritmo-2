//20/11/2023
//parte 12
//vetores como parametros de funcoes
//Exemplo 5: (Prigrma que lê valores e armazena em vetor)
#include <cstdio>
#define N 5
void fleitura(int v[]) //v corresponde ao vetor A
{
    int i;
    printf("Digite %d numeros \n",N);
    for( i = 0; i < N; i++)
        scanf("%d", &v[i]); //ler v e a mesma coisa que ler A
}
void fimprime(int v[]) //v corresponde ao vetor A
{
    int i;
    printf("Elementos do vetor: \n");
    for( i = 0; i < N; i++)
        printf("%d ", v[i]); //o meso que imprimir os elementos de A
    printf("\n");
}
void fdivide(int v[]) //v correspomnde ao vetor A
{
    int i;
    printf("\nElementos serao divididos por 2: \n");
    for( i = 0; i < N; i++)
        v[i] = v[i]/2; //divide os elementos por 2
}
int main() //Acrescente mais um vetor em amin e repita as chamadas para ele
{
    int A[N];
    fleitura(A);
    fimprime(A);
    fdivide(A);
    fimprime(A);
    return 0;
}