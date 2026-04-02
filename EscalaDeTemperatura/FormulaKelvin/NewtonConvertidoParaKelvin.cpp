#include <cstdio>
int main(){

    float kelvin, newton;

    printf("Digite a temperatura newton convertido kelvin: ");
    scanf("%f",&kelvin);

    newton = (kelvin - 273.15)* 33/100;

    printf("O resultado da conversão kelvin é: %.2f\n",newton);

    return 0;
}