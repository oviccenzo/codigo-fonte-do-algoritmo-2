#include <cstdio>
int main(){

    float romer,rankine;

    printf("Digite a temperatura rankine convertido para romer: ");
    scanf("%f",&romer);

    rankine = romer - 7.5 * 24/7 + 491.67;

    printf("O resultado da conversão de romer é: %.2f",rankine);

    return 0;
}