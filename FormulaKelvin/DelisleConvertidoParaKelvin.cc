#include <cstdio>

int main(){

    float kelvin, delisle;

    printf("Digite a temperatura delisle convertido para kelvin: ");
    scanf("%f", &delisle);

    kelvin = (373.15 - delisle) * 1.5;

    printf("O resultado da conversão de delisle para kelvin é: %2.f\n",kelvin);

    return 0;
}