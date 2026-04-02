#include <cstdio>
int main(){

    float c,de;

    printf("Digite a temperatura delisle convertido para celcius: ");
    scanf("%f",&c);

    de = (100 - c) * 1.5;

    printf("O resultado da conversão de celcius é: %.2f",de);
}