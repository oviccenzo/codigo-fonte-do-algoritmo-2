//
// Created by Robert L Resende on 16/10/24.
//
#include <stdio.h>
int main() {

    int n = 0,maior = 0,soma = 0,quantidade = 0;

    for(int i = 0; i < n; i++){
        printf("digite um numero: ");
        scanf("%d",&n);


         while(n <= 0){

             printf("digite um numero inteiro positivo: ");
             scanf("%d",&n);
             break;
         }
        if(n > maior){
            maior = n;
        }
        soma = +n;
    }

    float media = soma/quantidade;

    printf("maior numero lido e: %d",maior);
    printf("a media aritmetica e: %.2f",media);

    return 0;
}



















//int main() {
//    int n;
//    int maior = 0;
//    int soma = 0;
//    int quantidade = 15;
//
//    for (int i = 0; i < quantidade; i++) {
//        printf("Digite o %dº valor inteiro e positivo: ", i + 1);
//        scanf("%d", &n);
//
//        // Verifica se o número é positivo
//        while (n <= 0) {
//            printf("Por favor, digite um valor inteiro e positivo: ");
//            scanf("%d", &n);
//        }
//
//        // Atualiza o maior valor se necessário
//        if (n > maior) {
//            maior = n;
//        }
//
//        // Adiciona à soma
//        soma += n;
//    }
//
//    // Calcula a média aritmética
//    float media = (float)soma / quantidade;
//
//    // Imprime os resultados
//    printf("O maior valor lido: %d\n", maior);
//    printf("A média aritmética dos valores lidos: %.2f\n", media);
//
//    return 0;
//}
