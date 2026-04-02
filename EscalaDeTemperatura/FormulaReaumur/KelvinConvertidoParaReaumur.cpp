#include <cstdio>
int main(){

    float re, k;

    printf("Digite a temperatura kelvin convertido para reaumur: ");
    scanf("%f",&re);

    k = re / 0.8 + 273.15;

    printf("O resultado da conversão de reaumur é: %.2f",k);

    return 0;
}