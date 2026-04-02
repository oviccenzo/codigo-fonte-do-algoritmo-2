#include <cstdio>
int main(){

    float rankine, romer;

    printf("Digite a temperatura romer convertido para rankine: ");
    scanf("%f",&rankine);

    romer = (rankine - 491.67) * 7/24 + 7.5;

    printf("O resultado da conversão rankine é: %.2f ",romer);

    return 0;
}