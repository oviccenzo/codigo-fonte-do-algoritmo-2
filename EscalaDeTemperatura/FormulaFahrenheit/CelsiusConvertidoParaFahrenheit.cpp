#include <cstdio>
int main(){

    float fahrenheit, celsius;

    printf("Digite a temperatura fahrenheit convertido para celsius: ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit - 32) / 1.8;

    printf("O resultado da conversão de fahrenheit é: %.2f",celsius);

    return 0;
}