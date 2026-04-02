//
// Created by Robert L Resende on 30/10/24.
//
#include "cstdio"
#include "cstdlib"

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
    char dataDeValidade[10];
};

int main(){

    struct Produto produto;
    Produto produtos[100];

    int opcao = 0;

    while (opcao != 1) {
        printf("1 - Digite para sair\n");
        printf("2 - Digite para adicionar produto\n");
        printf("3 - Digite para atualizar produto\n");
        printf("4 - Digite para buscar por nome\n");
        printf("5 - Digite para buscar por preco\n");
        scanf("%d", &opcao);

        if (opcao == 2) {
            printf("Digite o nome do produto: \n");
            scanf("%50s", &produto.nome);
            printf("Digite o preco do produto: \n");
            scanf("%f", &produto.preco);
            printf("Digite a quantidade do produto: \n");
            scanf("%d", &produto.quantidade);
            printf("Digite a data de validade(dd/mm/aaaa): \n");
            scanf("%10s", &produto.dataDeValidade);
        }
        if (opcao == 3) {
            printf("Digite o nome do produto que voce quer atualizar: \n");
            char nomeProduto[50];
            scanf("%49s", &nomeProduto);

        }
        if (opcao == 4){
            printf("Digite o nome do produto que voce quer buscar: \n");
            char nomeProduto[50];
            scanf("%49s", &nomeProduto);
        }
        if(opcao == 5){
            printf("Digite o preco do produto que voce quer buscar: \n");
            float precoProduto;
            scanf("%f", &precoProduto);
        }
    }


    return 0;
}