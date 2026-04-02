#include <cstdio>
int main(){

    float n,de;

    printf("Digite a temperatura kelvin convertido para delisle: ");
    scanf("%f",&de);

    n = 373.15 - de * 2/3;

    printf("O resultado da conversão de delisle é: %.2f",n);

    return 0;
}
