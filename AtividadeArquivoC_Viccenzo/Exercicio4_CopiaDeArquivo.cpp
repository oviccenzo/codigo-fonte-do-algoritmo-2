//
// Created by Robert L Resende on 30/11/24.
//
#include <stdio.h>

int main(){

    char origem[100], destino[100];

    printf("Digite o arquivo de origem: ");
    scanf("%s", origem);

    printf("Digite o arquivo de destino: ");
    scanf("%s", destino);

    FILE *arquivoOrigem = fopen(origem, "r");
    FILE *arquivoDestino = fopen(destino, "w");

    if(arquivoOrigem == NULL || arquivoDestino == NULL){
        printf("Erro ao abrir arquivos\n");
        return 1;
    }

    char linha[100];

    while(fgets(linha,sizeof(linha), arquivoOrigem)!= NULL){
        fputs(linha, arquivoDestino);
    }

    fclose(arquivoOrigem);
    fclose(arquivoDestino);

    return 0;
}