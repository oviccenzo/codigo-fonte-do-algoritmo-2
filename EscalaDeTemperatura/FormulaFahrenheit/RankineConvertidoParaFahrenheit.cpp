#include <cstdio>
int main(){

    float fahrenheit,rankine;

    printf("Digite a temperatura rankine convertido para fahrenheit: ");
    scanf("%f",&fahrenheit);

    rankine = fahrenheit + 459;

    printf("O resultado da conversão fahrenheit é: %.2f",rankine);

    return 0;
}