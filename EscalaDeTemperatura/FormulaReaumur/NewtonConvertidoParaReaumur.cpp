#include <cstdio>
int main(){

    float re, n;

    printf("Digite a temperatura newton convertido para reaumur: ");
    scanf("%f",&re);

    n = re * 33/100;

    printf("O resultado da conversão reaumur é: %.2f",n);

    return 0;
}