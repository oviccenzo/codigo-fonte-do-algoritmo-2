#include <stdio.h>
int main(){

    float k,f;

    printf("Digite a temperatura fahrenheit convertido para kelvin: ");
    scanf("%f",&k);

    f = k * 1.8 - 459.67;

    printf("O resultado da conversão de fahrenheit para kelvin é: %.2f\n",f);

    return 0; 
}
