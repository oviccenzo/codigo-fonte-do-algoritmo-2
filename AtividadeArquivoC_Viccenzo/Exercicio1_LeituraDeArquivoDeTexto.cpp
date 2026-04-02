#include "cstdio"

int main(){

    //o arquivo foi criado para o txt entrada significa r
    // e para saida significa w
    FILE *entrada = fopen("entrada.txt","r");
    FILE *saida = fopen("saida.txt","w");


    //A entrada recebe nulo ou a saida recebe nulo
    if(entrada == NULL || saida == NULL){
        printf("Erro ao abrir arquivos");
        return 1;
    }
    /*Em C, NULL e uma constante que representa um ponteiro nulo
     * ,ou seja a ausencia de um endereco de memoria valido.*/


    char linha[100];
    while(fgets(linha,sizeof (linha),entrada)!= NULL){
        fputs(linha,saida);
    }

    //fclose foi criado para encerrar o programa de entrada e saida
    fclose(entrada);
    fclose(saida);

    return 0;
}