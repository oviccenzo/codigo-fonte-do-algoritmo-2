#include <cstdio>

int main() {
    FILE *entrada = fopen("entrada_media.txt", "r");

    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    char linha[100];
    int valor;
    while (fgets(linha, sizeof(linha), entrada) != NULL) {
        //printf("Valor lido: %d\n", linha);
        // fscanf(entrada, "Valor lido: %d", &valor);
    }

    fclose(entrada);
    return 0;
}