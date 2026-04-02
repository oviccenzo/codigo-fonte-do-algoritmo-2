#include <cstdio>

int main(){

    float matriz[3][3],soma;

    printf("Digite elemento: ");
    scanf("%f",&matriz[0][1]);

    printf("Digite a matrize: ");
    scanf("%f",&matriz[0][2]);

    printf("Digite a matrizes: ");
    scanf("%f",&matriz[0][3]);

    printf("Digite a matrizes: ");
    scanf("%f",&matriz[1][0]);

    printf("Digite a matrizes: ");
    scanf("%f",&matriz[1][1]);

    printf("Digite a matrizes: ");
    scanf("%f",&matriz[1][2]);


    printf("Digite a matrizes: ");
    scanf("%f",&matriz[2][0]);

    printf("Digite a matrizes: ");
    scanf("%f",&matriz[2][1]);

    printf("Digite a matrizes: ");
    scanf("%f",&matriz[2][2]);

    soma = matriz[0][0] + matriz[0][1] + matriz[0][2] +
           matriz[1][0] + matriz[1][1] + matriz[1][2] +
           matriz[2][0] + matriz[2][1] + matriz[2][2];

    printf("A soma dos quatro valores da matrize e: %.2f\n",soma);
}