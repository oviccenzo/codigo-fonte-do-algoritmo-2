#include <cstdio>
int main(){

    float rankine, reaumur;

    printf("Digite a temperatura rankine convertido para reaumur: ");
    scanf("%f",&reaumur);

    rankine = reaumur * 2.25 + 491.67;

    printf("O resultado da conversão de reaumur é: %.2f",rankine);

    return 0;
}