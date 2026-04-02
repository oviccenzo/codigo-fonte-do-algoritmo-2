#include <cstdio>
int main(){

    float de,f;

    printf("Digite a temperatura fahrenheit convertido para delisle: ");
    scanf("%f",&de);

    f = 212 - de * 1.2;

    printf("O resultado da conversão delisle é: %.2f",f);

    return 0;
}