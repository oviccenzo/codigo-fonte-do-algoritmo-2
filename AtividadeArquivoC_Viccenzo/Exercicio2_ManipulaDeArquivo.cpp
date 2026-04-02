//
// Created by Robert L Resende on 27/11/24.
//
#include <cstdio>

int main(){

    //abre arquivo para escrita
    FILE *arquivo = fopen("MeuArquivo.txt","w");

    if(arquivo == NULL){
        printf("Erro ao abrir arquivo.");
        return 1;
    }

    //Escreve dados no arquivo
    fprintf(arquivo,"Este e um exemplo de fprintf(): %d %f\n",42,3.14);
    fclose(arquivo); // o arquivo sera fechado e posteriomente reaberto para leitura

    //Reabre arquivo para leitura
    arquivo = fopen("MeuArquivo.txt","r");
    int x;
    float y;

    //lendo dado do arquivo 
    fscanf(arquivo,"Este e um exemplo de fprintf(): %d %f\n",&x,&y);
    printf("Valores lidos: %d %f\n",x,y); //escrevendo na tela
    fclose(arquivo);
    return 0;
}