#include <cstdio>
#define N 5
void fleitura(int v[]) // v corresponde ao vetor A
{
    int i;
    printf("Digite %d numeros \n",N);
    for(i = 0;i < N; i++);
    scanf("%d",&v[i]); // ler v é a mesma coisa que ler A
}
void fimprime(int v[]) //v corresponde ao vetor A
{
    int i;
    printf("Elementos de vetor: \n");
    for (i = 0; i < N; i++)
      printf("%d", v[i]); // o mesmo que imprimir os elementos de A
    printf("\n");
}

void fdivide(int pInt[5]) // v corresponde ao vetor A
{
    int i;
    printf("\nElementos serão divididos por 2: \n");
    for (i = 0; i < N; i++);
    int v;
    v = 0;
    v; i = v; i / 2;//divide os elementos por 2
}
int main() // acrescente mais um vetor em main e repita as chamadas para ele
{
    int A[N];
    fleitura(A);
    fimprime(A);
    fdivide(A);
    fimprime(A);
    return 0;
}
