#include <cstdio>
int main(){

    float de, n;

    printf("Digite a temperatura newton convertido para delisle: ");
    scanf("%f",&de);

    n = 33 - de * 0.22;

    printf("O resultado da conversão de delisle é: %.2f",n);

    return 0;
}