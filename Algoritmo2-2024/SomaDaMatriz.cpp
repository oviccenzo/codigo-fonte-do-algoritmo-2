//20/11/2023
//Exemplo 4:
#include <cstdio>
#include <cstdlib>
int soma_mat(int matriz[][10],int linhas)
{
    int i, j, soma = 0;
    for(i = 0; i < linhas; i++)
        for(j = 0; j < 10; j++)
            soma += matriz[i][j];
    return (soma);
}
void imprime_mat(int matriz[][10], int linhas)
{
    int i, j;
    printf("\nMatriz com %d linhas: \n",linhas);
    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < 10; j++)
            printf("%3d",matriz[i][j]);
        printf("\n");
    }
}
int main(){
    int a[3][10] = {{1,2,3,4,5,6,7,8,9,10},
                    11,12,13,14,15,16,17,18,19,20};

    int b[4][10] = {{1,2,3,4,5,6,7,8,9,10},
                    {11,12,13,14,15,16,17,18,19,20},
                    {21,22,23,24,25,26,27,28,29,30}};

    int c[5][10] = {{1,2,3,4,5,6,7,8,9,10},
                    {11,12,13,14,15,16,17,18,19,20},
                    {21,22,23,24,25,26,27,28,29,30},
                    {31,32,33,34,35,36,37,38,39,40}};

    int d[6][10] = {{1,2,3,4,5,6,7,8,9,10},
                    {11,12,13,14,15,16,17,18,19,20},
                    {21,22,23,24,25,26,27,28,29,30},
                    {31,32,33,34,35,36,37,38,39,40},
                    {41,42,43,44,45,46,47,48,49,50}};


    imprime_mat(a,3);
    printf("\nSoma dos elementos da matriz a: %d\n\n", soma_mat(a,3));
    imprime_mat(b,4);
    printf("\nSoma dos elementos da matriz b: %d\n\n", soma_mat(b,4));
    imprime_mat(c,5);
    printf("\nSoma dos elementos da matriz c: %d\n\n", soma_mat(c,5));
    imprime_mat(d,6);
    printf("\nSoma dos elementos da matriz d: %d\n\n", soma_mat(d,6));
    system("PAUSE");
    return 0;
}