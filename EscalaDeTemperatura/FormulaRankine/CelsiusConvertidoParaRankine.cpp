#include <cstdio>
int main(){

    float rankine,celsius;

    printf("Digite a temperatura celsius convertido para rankine: ");
    scanf("%f",&rankine);

    celsius = rankine / 1.8 + 273.15;

    printf("O resultado da conversão de rankine é: %.2f",celsius);

    return 0;
}