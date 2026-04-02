#include <cstdio>
int main(){

    float fahrenheit, delisle;

    printf("Digite a temperatura delisle convertido para fahrenheit: ");
    scanf("%f",&fahrenheit);

    delisle = (fahrenheit - 32) / 2.25;

    printf("O resultado da conversão fahrenheit é: %.2f",delisle);

    return 0;
}