#include <cstdio>
int main(){

    float f,ro;

    printf("Digite a temperatura fahrenheit convertido para romer: ");
    scanf("%f",&ro);

    f = (ro - 7.5) * 24/7 + 32;

    printf("O resultado da conversão de romer é:  %.2f",f);

    return 0;
}