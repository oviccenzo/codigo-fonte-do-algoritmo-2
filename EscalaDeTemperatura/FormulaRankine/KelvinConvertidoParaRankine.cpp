#include <cstdio>
int main(){

    float rankine, kelvin;
    printf("Digite a temperatura kelvin convertido para rankine: ");
    scanf("%f",&rankine);

    kelvin = rankine / 1.8;

    printf("O resultado da conversão rankine é: %.2f",kelvin);

    return 0;
}