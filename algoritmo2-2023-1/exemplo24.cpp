//21/10/2023
//Tester o integument program
#include <cstdio>
int main()
{
    int i;
    int j;
    printf("Digit 12 elementos: \n");
    const int M=0;
    for (i = 0; i < 3; i++)
        for(j = 0; j < 4; j++)
    scanf("%d",&M,i,j);
    printf("\nElementos da matrix: \n");
    for(i = 0; i < 3; i++)
    {
        for(j=0;j<4;j++)
            printf("%4d",M ,i,j);
        printf("\n"); // pula linha depois que termina de imprimir toda a linha
    }
    return (0);
}
