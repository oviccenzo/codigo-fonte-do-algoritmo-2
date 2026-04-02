#include <cstdio>
int main()
{
    FILE * arquivo = fopen("meuarquivo.txt","w");

    if(arquivo == NULL){
        printf("Erro ao abrir arquivo.");

        return 1;
    }
    fprintf(arquivo,"Este e um exemplo de fprintf():%d %f\n",42,3.14);
    fclose(arquivo);//O arquivo sera fechada e posteriomente raberto para leitura

    arquivo = fopen("meuarquivo.txt","r");
    int x;
    int y;
    fscanf(arquivo,"Este é um exemplo de fprintf(): %d %f\n",&x,&y);//lendo do arquivo
    printf("valores lidos: %d %f\n",x,y);//Escrevendo na tela
    fclose(arquivo);
    return 0;
}