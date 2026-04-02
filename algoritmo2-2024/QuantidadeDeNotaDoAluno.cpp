//19/11/2023
//Exemplo 3:
#include <cstdio>
int main() //Leitura e impressao dos elementos de um vetor de reais
{
    float notas[5];
    int i;
    printf("Digite as notas de 5 alunos: \n");
    for (i = 0; i < 5; i++) //repeticao para leitura
        scanf("%f", &notas[i]);
    printf("As notas digitadas foram as seguintes: \n");
    for( i = 0; i < 5; i++)
        printf("%f \n", notas[i]);
    return 0;
}