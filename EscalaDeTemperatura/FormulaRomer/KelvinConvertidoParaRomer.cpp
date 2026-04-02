#include <cstdio>
int main(){

    float r, k;

    printf("Digite a temperatura kelvin convertido para romer: ");
    scanf("%f",&r);

    k = (r - 7.5) * 40/21 + 273.15;

    printf("O resultado da conversão de romer é: %.2f",k);

    return 0;
}