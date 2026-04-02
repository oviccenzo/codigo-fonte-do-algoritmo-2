//20/11/2023
//Vetores(arrays unidimensionais)
//Exemplo2:

#include <cstdio>

int main(){ //Leitura e calculo da media de um vetor numeros

    float notas[5];
    float media, soma = 0;
    int i;
    printf("Digite as notas de 5 alunos: \n");
    for(i = 0; i < 5; i++){ // repeticao para leitura
        scanf("%f",&notas[i]);
    }
    for( i = 0; i < 5; i++){     //repeticao para somar
        soma = soma + notas[i]; // ou pode ser  usar soma += notas[i];
    }
    media = soma/5.0;
    printf("A media das notas e a seguinte: %.2f: \n",media);
    return 0;

}