#include <cstdio>
int main(){

    int d,D,l;

    printf("Calcular o comprimento da diagonla menor(d): ");
    scanf("%d",&d);

    printf("Calcular o comprimento da diagonal maior(D): ");
    scanf("%d",&D);

    printf("Calcular o lado da diagonal(L): ");
    scanf("%d",&l);

    int A = D * d / 2;
    int P = 4 * l;

    printf("O comprimento da diagonal é: %d",A);
    printf("\n");
    printf("O resultado da diagonal é: %d",P);

    return 0;

}