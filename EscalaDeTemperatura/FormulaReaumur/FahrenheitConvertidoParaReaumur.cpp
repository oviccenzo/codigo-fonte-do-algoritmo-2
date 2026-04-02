#include <cstdio>
int main(){

    float f, de;

    printf("Digite a temperatura fahrenheit convertido para reaumur: ");
    scanf("%f",&de);

    f = de * 2.25 + 32;

    printf("O resultado da conversão de reaumur é: %.2f",f);

    return 0;
}