//
// Created by Robert L Resende on 30/11/24.
//
#include <stdio.h>

int main() {
    FILE *arquivo = fopen("numeros.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo.");
        return 1;
    }

    int soma = 0, contador = 0;
    int numero;

    while (fscanf(arquivo, "%d", &numero) != EOF) {
        soma += numero;
        contador++;
    }

    fclose(arquivo);

    if (contador == 0) {
        printf("Arquivo vazio.");
    } else {
        float media = (float)soma / contador;
        printf("Média: %.2f\n", media);
    }

    return 0;
}
