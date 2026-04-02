#include <cstdio>
int main(){

    float c,k;

    printf("Digite a temperatura kelvin convertido para celcius: ");
    scanf("%f",&c);

    k = c + 273.15;

    printf("O resultado da conversão de celcius é: %.2f",k);

    return 0;
}