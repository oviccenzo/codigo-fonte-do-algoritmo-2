//20/11/2023
//parte 14
//Variaveis indexadas bidimensionais(matrizes)
//Exemplo 1 -Testar o seguinte programa
#include <cstdio>
int main()
{
    int i, j, M[3][4];
    printf("Digite 12 elementos: \n");
    for( i = 0; i < 3; i++)
        for(j = 0; j < 4; j++)
            scanf("%d",&M[i][j]);

    printf("\nElementos da matriz: \n");
    for( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
            printf("%4d",M[i][j]);
        printf("\n"); // pula linha depois que termina de imprimir toda a linha
    }
    return (0);
}