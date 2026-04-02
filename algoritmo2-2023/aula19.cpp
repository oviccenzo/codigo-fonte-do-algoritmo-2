#include <cstdio>

int main( ) //Leitura e calculo da média de um vetor de números
{
    float notas[5];
    float media, soma = 0;
    int i;
    printf("Digite as notas de 5 alunos: ");
    for (i = 0; i < 5; i++) { //repetição para leitura
        scanf("%f ", &notas[i]);
    }
    for (i = 0; i < 5; i++) { //repetição para somar
        soma = soma + notas[i]; // ou pode ser usar: soma += notas[i]; }
        media = soma / 5.0;
        printf(" A media das notas e a seguinte: %.2f: \n", media);
        return 0;
    }

}