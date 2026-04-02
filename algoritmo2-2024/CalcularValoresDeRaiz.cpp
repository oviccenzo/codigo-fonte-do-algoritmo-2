#include <stdio.h>
#include <math.h>  // Para usar a função sqrt

int main() {
    int valor;

    while (1) {
        // Lê o valor do usuário
        printf("Digite um valor (zero para terminar): ");
        scanf("%d", &valor);

        // Se o valor for zero, termina o programa
        if (valor == 0) {
            break;
        }

        // Calcula e imprime o quadrado, o cubo e a raiz quadrada
        printf("Quadrado: %d\n", valor * valor);
        printf("Cubo: %d\n", valor * valor * valor);
        printf("Raiz quadrada: %.2f\n", sqrt(valor));  // %.2f para limitar a raiz a 2 casas decimais
        printf("\n"); // Linha em branco para separar os resultados
    }

    return 0;
}
