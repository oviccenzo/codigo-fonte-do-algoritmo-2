#include <cstdio>
int main(){

    float f,c;

    printf("Digite a temperatura fahrenheit convertido para celcius: ");
    scanf("%f",&c);

    f = c * 1.8 + 32;

    printf("O resultado da conversão de celcius é: %.2f",f);

    return 0;
}