//
// Created by Robert L Resende on 20/11/24.
//
#include <cstdio>

int Fsoma1(int n){
    int soma = 0;
    for(int i = 0; i <= n; i++){
        soma += i;
    }
    return soma;
}

int main() {

    int n;
    printf("Digite o numero de n: ");
    scanf("%d", &n);
    int resultado = Fsoma1(n);
    printf("A soma de 1 ate %d e %d\n", n, resultado);

    return 0;
}
