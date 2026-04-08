#include <stdio.h>
#include <stdlib.h>

#define M 10

int main() {
    // Definindo os vetores
    int *a = malloc(M * sizeof(int));
    int *b = malloc(M * sizeof(int));
    int *soma = malloc(M * sizeof(int));

    if (a == NULL || b == NULL || soma == NULL) {
        printf("Erro ao alocar mem?ria.\n");
        return 1;
    }

    // Lendo o vetor a
    printf("Digite os elementos do vetor a:\n");
    for (int i = 0; i < M; i++) {
        scanf("%d", &a[i]);
    }

    // Lendo o vetor b
    printf("Digite os elementos do vetor b:\n");
    for (int i = 0; i < M; i++) {
        scanf("%d", &b[i]);
    }

    // Somando os vetores
    for (int i = 0; i < M; i++) {
        soma[i] = a[i] + b[i];
    }

    // Imprimindo o resultado
    printf("Soma dos vetores:\n");
    for (int i = 0; i < M; i++) {
        printf("%d ", soma[i]);
    }
    printf("\n");

    // Liberando a mem?ria
    free(a);
    free(b);
    free(soma);

    return 0;
}

