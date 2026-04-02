#include <cstdio>
int main(){

    float c,f;

    printf("Digite a temperatura rankine convertido para celcius: ");
    scanf("%f",&c);

    f = c * 1.8 + 491.67;

    printf("O resultado da conversão de celcius é: %.2f",f);

    return 0;
}