#include <stdio.h>

int main() {
    float altura, peso;

    printf("Digite a altura de uma pessoa (em metros): \n");
    scanf("%f", &altura);

    printf("Digite o peso de uma pessoa (em kg): \n");
    scanf("%f", &peso);

    float imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Peso normal\n");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Excesso de peso\n");
    } else if (imc >= 30 && imc < 34.9) {
        printf("Obesidade grau 1\n");
    } else if (imc >= 35 && imc < 39.9) {
        printf("Obesidade grau 2 (severa)\n");
    } else if (imc >= 40) {
        printf("Obesidade grau 3 (mórbida)\n");
    }

    printf("O resultado do IMC é: %.2f\n", imc);

    return 0;
}

