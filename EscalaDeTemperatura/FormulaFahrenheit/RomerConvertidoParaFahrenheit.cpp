#include <cstdio>
int main(){

    float romer, fahrenheit;

    printf("Digite a temperatura romer convertido para fahrenheit: ");
    scanf("%f",&fahrenheit);

    romer = (fahrenheit - 32) * 7/24 + 7.5;

    printf("O resultado da conversão fahrenheit é: %.2f",romer);

    return 0;
}