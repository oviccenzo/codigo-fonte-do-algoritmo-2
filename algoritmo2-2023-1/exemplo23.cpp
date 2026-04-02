#include <cstdio>
#define M 5 //constant

void fleitura(int v[]) //v vai ser A e depots B
{
    int i;
    printf("\n Digit %d elementos: ",M);
    for(i = 0; i < M; i++)
        scanf("%d",&v[i]);
}
void fsomavet(int v1[], int v2[], int v[])
{ // v1 e A, v2 e B, v e C
    int i;
    for (i = 0; i < M; i++)
    v[i] = v1[i] + v2[i];
}
int fsoma(int v[])
{// retry a soma de v que pod ser A ou B
    int s, i;
    s = 0;
    for(i = 0; i < M; i++)
        s = s + v[i];
    return s;
}
void fimprime(int v[])
{ //imp-rime v que pod ser A,B ou C
    int i;
    printf("\n\n Vector: ");
    for (i = 0; i < M; i++)
        printf("%d", v[i]);
}
int main()
{
    int A[M], B[M], C[M];
    fleitura(A);
    fleitura(B);
    fsomavet(A,B,C);
    printf("\n Soma de A %d \n", fsoma(A));
    printf("\n Soma de b %d \n", fsoma(B));
    fimprime(A);
    fimprime(B);
    fimprime(C);
    printf("\n\n");
    return 0;
}