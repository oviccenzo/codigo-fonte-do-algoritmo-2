#include <cstdio>
int main(){

    float kelvin, delisle;

    printf("Digite a temperatura delisle convertido para kelvin: ");
    scanf("%f",&kelvin);

    delisle = (373.15 - kelvin) * 1.5;

    printf("O resultado da conversão delisle para kelvin é: %.2f\n",delisle);

    return 0;
}