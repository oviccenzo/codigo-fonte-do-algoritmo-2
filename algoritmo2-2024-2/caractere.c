#include <stdio.h>
#include <string.h>

typedef struct {
    char marca[15];
    int ano;
    char cor[10];
    float preco;
} TCarro;

int main() {
    TCarro car1, car2;

    printf("Digite os dados do carro 1 (marca, ano, cor, preco): ");
    scanf("%s %d %s %f", car1.marca, &car1.ano, car1.cor, &car1.preco);

    printf("Digite os dados do carro 2 (marca, ano, cor, preco): ");
    scanf("%s %d %s %f", car2.marca, &car2.ano, car2.cor, &car2.preco);

    TCarro carroMaisBarato = (car1.preco < car2.preco) ? car1 : car2;
    printf("Dados do carro mais barato:\nMarca: %s\nAno: %d\nCor: %s\nPreco: %.2f\n", 
           carroMaisBarato.marca, carroMaisBarato.ano, carroMaisBarato.cor, carroMaisBarato.preco);

    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    if (car1.ano >= ano) {
        printf("Carro 1 é do ano %d ou mais novo.\n", car1.ano);
    }
    if (car2.ano >= ano) {
        printf("Carro 2 é do ano %d ou mais novo.\n", car2.ano);
    }

    char marca[15];
    printf("Digite uma marca: ");
    scanf("%s", marca);
    if (strcmp(car1.marca, marca) == 0) {
        printf("Tem carro da marca %s.\n", marca);
    }
    if (strcmp(car2.marca, marca) == 0) {
        printf("Tem carro da marca %s.\n", marca);
    }

    return 0;
}

