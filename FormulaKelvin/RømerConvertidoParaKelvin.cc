#include <stdio.h>
int main(){

    float Rømer, kelvin;

    printf("Digite a temperatura Rømer convertido para kelvin: ");
    scanf("%f",&Rømer);

    kelvin = (Rømer - 273) * 21/40 + 7.5;

    printf("O resultado da conversão de Rømer para kelvin é: %2.f\n",kelvin);

    return 0;
}