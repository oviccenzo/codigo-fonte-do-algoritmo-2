#include <stdio.h>

int main(){

    float celsius, kelvin;

    printf("Digite a temperatura celsius convertido para kelvin: ");
    scanf("%f",&celsius);

    kelvin = celsius - 273.15;

    printf("O resultado da conversão de celsius para kelvin é: %.2f\n",kelvin);

    return (0);
}