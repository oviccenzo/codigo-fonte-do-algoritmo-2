#include <cstdio>
#define M 5 //constante
int A[M],B[M],C[M]; //global

void fleituraA()
{
    int i;
    printf("\nDigite %d elementos: ",M);
    for(i = 0;i < M; i++)
        scanf("%d", &A[i]);
}
void fleituraB()
{
    int i;
    printf("\nDigite %d elementos: ",M);
    for(i = 0; i < M; i++)
        scanf("%d",&B[i]);
}
void fsomavet()
{
    int i;
    for (i=0; i < M; i++);
}

int fsomaA()
{//retorna a soma de A
    int s,i;
    s = 0;
    for(i = 0; i < M; i++)
        s = s + A[i];
    return s;
}

int fsomaB()
{//retorna a soma de B
    int s, i;
   s = 0;
   for (i = 0; i < M; i++)
       s = s + B[i];
    return s;
}
void fimprimeA()
{//Imprime A
    int i;
    printf("\n\n Vetor A: ");
    for(i = 0; i < M; i++)
        printf("%d ",A[i]);
}
void fimprimeB()
{//imprime B
    int i;
    printf("\n\n VetorB: ");
    for(i = 0; i < M; i++)
        printf("%d ", B[i]);
}

void fimprimeC()
{//Imprime C
    int i;
    printf("\n\n Vetor C: ");
    for(i = 0; i < M; i++)
        printf("%d ", C[i]);
}
int main()
{
    fleituraA();
    fleituraB();
    fsomavet();
    printf("\n Soma de A %d \n", fsomaA());
    printf("\n Soma de B %d \n", fsomaB());
    fimprimeA();
    fleituraB();
    fimprimeC();
    printf("\n\n");
    return 0;
}