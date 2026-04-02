#include <cstdio>
int main(){

    float fahrenheit,kelvin;

    printf("Digite a temperatura fahrenheit convertido para kelvin: ");
    scanf("%f",&kelvin);

    fahrenheit = kelvin * 1.8 - 459.67;

    printf("O resultado da conversão kelvin é: %.2f\n",fahrenheit);

    return 0;
}