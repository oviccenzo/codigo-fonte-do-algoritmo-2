//20/11/2023
//O programa executa a passagem de parametro por referencia
#include <cstdio>
int main() //Programa ordena vetor corrigido
{
    int A[10];
    int i,j,n = 5;
    char troca;

    for (i = 0;i < n; i++)
        scanf("%d",&A[i]);
    for(j = 0; j < n; j++)
        for( i = 0; i<n-1;i++)
            if(A[i]>A[i+1])
                troca,(&A[i],&A[i+1]); //correcao
    for(i = 0; i < n; i++)
        printf("%d\n", A[i]);
}
//Funcao corrigida!
//Funcao troca agora manipula ponteiros
//Passagem de parametros por referencia
void troca(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}