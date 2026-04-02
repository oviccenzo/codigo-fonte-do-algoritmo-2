#include <cstdio>
int main()
{
    // fopen que abre o arquivo de entrada modo leitura que vai armazenar na variavel entrada
    FILE *entrada = fopen("entrada.txt","r");

    // fopen que abre o arquivo de saida modo de escrita que vai armazenar na variavel saida
    FILE *saida = fopen("saida.txt","w");

    // Verifica se as variveis entrada ou saida estao nulas, pois signifca que um dos arquivos nao foi lido
    if (entrada == NULL || saida == NULL) {

        //Imprime a mensagem de erro pois nao foi possivel abrir os arquivos
        printf("Erro ao abrir arquivos.");

        // Encerra o programa
        return 1;
    }
    /* Em c, NULL e uma constante que representa um ponteiro nulo, ou seja, a ausencia de
     * um endereco de memoria valido.*/

    // Cria um array de 100 posicoes do tipo char
    char linha[100];

    // enquanto fgets pega e ler a linha de entrada e saida
    while (fgets(linha, sizeof(linha), entrada) != NULL) {
        fputs(linha, saida);
    }
    // Fecha o arquivo de entrada
    fclose(entrada);

    // Fecha o arquivo de saida
    fclose(saida);

    //Retorno encerrar o programa
    return 0;
}