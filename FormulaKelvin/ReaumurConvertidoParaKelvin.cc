#include <stdio.h>
int main(){

    float reaumur, kelvin;

    printf("Digite a temperatura kelvin convertido para reuamur: ");
    scanf("%f",&reaumur);

    kelvin = (reaumur - 273.15) * 0.8;

    printf("O resultado da conversão reaumur para kelvin é: %.2f\n",kelvin);

    return 0;
}