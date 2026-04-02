#include <cstdio>
int main(){

    float c,ro;

    printf("Digite a temperatura romer convertido para celcius: ");
    scanf("%f",&c);

    ro = c * 21/40 + 7.5;

    printf("O resultado da conversão de celcius é: %.2f",ro);

    return 0;
}