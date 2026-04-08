#include <stdio.h>

int main() {
    int n, c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    while(1) {
        printf("Digite um numero (ou um numero negativo para sair): ");
        scanf("%d", &n);

        if (n < 0) {
            // Se o número for negativo, sai do laço
            break;
        }

        if (n >= 0 && n <= 25) {
            c1++; // Incrementa o contador para o intervalo 0-25
        } else if (n >= 26 && n <= 50) {
            c2++; // Incrementa o contador para o intervalo 26-50
        } else if (n >= 51 && n <= 75) {
            c3++; // Incrementa o contador para o intervalo 51-75
        } else if (n >= 76 && n <= 100) {
            c4++; // Incrementa o contador para o intervalo 76-100
        } else {
            printf("Numero fora do intervalo (0-100)\n");
        }
    }

    // Exibe os resultados após o laço
    printf("A quantidade de números entre 0 e 25 é: %d\n", c1);
    printf("A quantidade de números entre 26 e 50 é: %d\n", c2);
    printf("A quantidade de números entre 51 e 75 é: %d\n", c3);
    printf("A quantidade de números entre 76 e 100 é: %d\n", c4);

    return 0;
}

