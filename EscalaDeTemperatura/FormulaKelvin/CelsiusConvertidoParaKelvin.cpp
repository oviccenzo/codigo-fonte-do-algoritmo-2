#include <cstdio>
int main(){

    float kelvin,celsius;

    printf("Digite a temperatura celsius convertido para kelvin: ");
    scanf("%f",&kelvin);

    celsius = kelvin - 273.15;

    printf("O resultado da conversão kelvin é: %2.f\n",celsius);

    return 0;
}