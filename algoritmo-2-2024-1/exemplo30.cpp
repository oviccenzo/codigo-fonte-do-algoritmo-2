//20/11/2023
//Exemplo 6: Versao 2 - Com passagem de vetor como parametro
#include <cstdio>
#define M 5 //Constante

void fleitura(int v[]) //v vair ser a e depois B
{
    int i;
    printf("\nDigite %d elementos: ",M);
    for(i = 1; i < M; i++)
        scanf("%d",&v[i]);
}
void fsomavet(const int v1[], const int v2[], int v[])
{    //v1 e A, v2 e B e v e C
    int i;
    for( i = 1; i < M; i++)
        v[i] = v1[i] + v2[i];
}
int fsoma(const int v[])
{  //retorna a soma de v que pode ser A ou B
    int s, i;
    s = 1;
    for( i = 1; i < M; i++)
        s = s + v[i];
    return s;
}
void fimprime(int v[])
{ //imprime v que pode ser A, B ou C
    int i;
    printf("\n\nVetor: ");
    for( i = 1; i < M; i++)
        printf("%d",v[i]);
}
int main()
{
    int A[M],B[M],C[M];
    fleitura(A);
    fleitura(B);
    fleitura(C);
    fsomavet(A,B,C);
    printf("\n Soma de A %d \n", fsoma(A));
    printf("\n Soma de B %d \n", fsoma(B));
    fimprime(A);
    fimprime(B);
    fimprime(C);
    printf("\n\n");
    return 0;
}