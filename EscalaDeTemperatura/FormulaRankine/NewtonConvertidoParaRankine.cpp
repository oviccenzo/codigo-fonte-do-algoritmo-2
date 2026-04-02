#include <cstdio>
int main(){

    float rankine, newton;

    printf("Digite a temperatura newton convertido para rankine: ");
    scanf("%f",&rankine);

    newton = (rankine - 459.67) * 11/60;

    printf("O resultado da conversão rankine é: %.2f",newton);

    return 0;
}