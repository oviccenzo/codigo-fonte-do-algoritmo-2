#include <stdio.h>

void somaPlanos2D(int array3D[3][2][3], int profundidade, int altura, int largura) {
    // Para cada plano 2D na profundidade
    for (int i = 0; i < profundidade; ++i) {
        int soma = 0;
        
        // Soma os elementos de cada plano 2D
        for (int j = 0; j < altura; ++j) {
            for (int k = 0; k < largura; ++k) {
                soma += array3D[i][j][k];
            }
        }

        // Imprime a soma do plano 2D atual
        printf("Soma dos elementos do plano %d: %d\n", i + 1, soma);
    }
}

int main() {
    // Criando um array 3D exemplo de dimensões 3x2x3 (profundidade x altura x largura)
    int array3D[3][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        },
        {
            {13, 14, 15},
            {16, 17, 18}
        }
    };

    // Chamando a função para imprimir a soma dos planos 2D
    somaPlanos2D(array3D, 3, 2, 3);

    return 0;
}

