#include <cstdio>
int main(){

    float celsius,reaumur;

    printf("Digite a temperatura celsius convertido para reaumur: ");
    scanf("%f",&reaumur);

    celsius = reaumur * 0.8 + 273.15;

    printf("O resultado da conversão de reaumur é: %.2f",celsius);

    return 0;
}