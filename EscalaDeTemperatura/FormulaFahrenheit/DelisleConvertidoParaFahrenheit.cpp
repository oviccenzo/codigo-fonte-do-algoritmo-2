#include <cstdio>

int main(){

    float delisle, fahrenheit;

    printf("Digite a temperatura delisle convertido para fahrenheit: ");
    scanf("%f",&fahrenheit);

    delisle = (212 - fahrenheit) * 5/6;

    printf("O resultado da conversão de fahrenheit é: %.2f",delisle);

    return 0;
}