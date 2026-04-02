#include <cstdio>

int main(){
    // Abre o arquivo em modo escrita
    FILE *arquivo = fopen("meuarquivo.txt","w");

    // Verifica se a variavel arquivo esta nula, pois significa que o arquivo nao foi lido
    if (arquivo == NULL) {

        // Imprime a mensagem de erro pois nao foi possivel abrir o arquivo
        printf("Erro ao abrir arquivo.");

        // Encerra o programa
        return 1;
    }
    // Imprime o conteudo do arquivo formatado
    fprintf(arquivo, "Este e um exemplo de fprintf(): %d%f\n", 42, 3.14);

    // O arquivo sera fechado e posteriomente reaberto para leitura
    fclose(arquivo);

    // Abre o arquivo em modo leitura
    arquivo = fopen("meuarquivo.txt","r");

    // Declarando variaveis
    int x;
    float y;

    // lendo os valores formatados de arquivo e armazenando nas variaveis x e y
    fscanf(arquivo, "Este e um exemplo de fprintf(): %d%f\n", &x, &y);

    // Imprime os valores das variaveis x e y
    printf("Valores lidos: %d%f\n", x, y);

    // Fecha o arquivo
    fclose(arquivo);

    // Encerra o programa
    return 0;
}