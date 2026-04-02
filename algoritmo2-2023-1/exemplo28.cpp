//21/10/2023 as 11h55m
#include <cstdio>

int soma_mat(int matrix[][10], int lines)
{
    int i, j, soma = 0;
    for(i = 0; i < lines; i++)
        for (j = 0; j < 10; j++)
            soma +=matrix[i][j];
    return(soma);
}
void print_mat(int matrix[][10], int lines)
{
    int i, j;
    printf("\n Matrix com %d lines: \n",lines);
    for(i=0;i<lines;i++)
    {
        for(j=0;j<10;j++)
            printf("%3d",matrix[i][j]);
        printf("\n");
    }
}
int main()
{
    int a[3][10] ={{1,2,3,4,5,6,7,8,9,10},
                   {11,12,13,14,15,16,17,18,19,20},
                   {31,32,33,34,35,36,37,38,39,40}};
    int b[4][10] ={{1,2,3,4,5,6,7,8,9,10},
                   {11,12,13,14,15,16,17,18,19,20},
                   {21,22,23,24,25,26,27,28,29,30},
                   {31,32,33,34,35,36,37,38,39,40},};
    int c[5][10]={{1,2,3,4,5,6,7,8,9,10},
                  {11,12,13,14,15,16,17,18,19,20},
                  {21,22,23,24,25,26,27,28,29,30},
                  31,32,33,34,35,36,37,38,39,40,
                  {41,42,43,44,45,46,47,48,49,50,}};

    print_mat(a,3);
    printf("\nSoma dos elementos da matrix a: %d\n\n", soma_mat(a,3));
    print_mat(b,4);
    printf("\nSoma dos elementos da matrix b: %d\n\n", soma_mat(b,4));
    print_mat(c,5);
    printf("\nSoma dos elementos da matrix c: %d\n\n", soma_mat(c,5));
    return 0;
}