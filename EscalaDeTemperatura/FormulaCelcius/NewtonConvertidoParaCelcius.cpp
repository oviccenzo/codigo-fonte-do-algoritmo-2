#include <cstdio>
int main(){

    float c,n;

    printf("Digite a temperatura newton convertido para celcius: ");
    scanf("%f",&c);

    n = c * 33/100;

    printf("O resultado da conversão de celcius é: %.2f",n);

    return 0;
}