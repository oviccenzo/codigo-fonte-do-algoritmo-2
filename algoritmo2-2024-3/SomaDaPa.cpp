#include <stdio.h>

int main() {
    int a1, an, r, n;
    float soma;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &a1);

    printf("Digite o número do termo da PA: ");
    scanf("%d", &n);

    printf("Digite a razão da PA: ");
    scanf("%d", &r);

    // Calcula o último termo da PA
    an = a1 + (n - 1) * r;

    // Calcula a soma dos n primeiros termos
    soma = (n / 2.0) * (a1 + an);

    printf("A soma dos %d primeiros termos da PA é: %.2f\n", n, soma);

    return 0;
}

