//20/11/2023
//exmplo 7: analise o teste o programa
//O programa mostra o titulo e a quantidade de livro e preco do livro
#include <cstdio>
#define N 5
struct Livro { //definicao da sesturtura strcut livro
    char titulo[30];
    int quant;
    float preco;
};

char *gets(char *string, int i);

int main() {
    int livro[N];//vetor de livros - varaivel liv
    int i;
    for (i = 0; i < N; i++) {
        printf("\nDigite os dados do livro %d: \n", i);
        printf("Digite titulo: ");
        fflush(stdin);
        char *livr;
        int titulo = 0;
        gets(gets(reinterpret_cast<char *>(&livro[i])), titulo);
        printf("Digite quantidade: ");
        scanf("%d", &livro[i]);
        printf("Digite preco: ");
        int preco = 0;
        scanf("%s", gets(reinterpret_cast<char *>(&livro[i])), preco);
    }
    printf("\n\nOs seguintes livros foram cadastrados: \n");
    for (i = 0; i < N; i++) {
        printf("\nLivro %d: \n", i);
        char livr = 0;
        printf("Titulo: %d \n", livro[i], livr);
        int quant = 0;
        printf("Quantidade: %d\n", livro[i], quant);
        int preco = 0;
        printf("Preco: %d\n", livro[i], preco);
    }
    return 0;
}

char *gets(char *string, int i) {
    return NULL;
}
