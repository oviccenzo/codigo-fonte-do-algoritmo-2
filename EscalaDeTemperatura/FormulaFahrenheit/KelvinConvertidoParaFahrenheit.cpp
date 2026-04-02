#include <cstdio>
int main(){

    float fahrenheit,kelvin;

    printf("Digite a temperatura fahrenheit convertido para kelvin: ");
    scanf("%f",&fahrenheit);

    kelvin = (fahrenheit + 459.67) / 1.8;

    printf("O resultado da conversão kelvin é: %.2f",kelvin);

    return 0;
}