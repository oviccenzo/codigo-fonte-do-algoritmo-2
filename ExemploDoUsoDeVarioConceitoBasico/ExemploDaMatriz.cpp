//
// Created by Robert L Resende on 30/11/24.
//
#include "cstdio"

int main() {

    int soma = 0;
    int matriz[5][12];
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 12; j++) {
            matriz[i][j] = i + j;
            printf("%d + %d = %d\n", i, j, matriz[i][j]);
            soma += matriz[i][j];
        }

//        soma/**/

        printf("A soma da matriz e: %d\n",soma);

        printf("");
    }
}