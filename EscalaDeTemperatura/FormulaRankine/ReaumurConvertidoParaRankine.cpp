#include <cstdio>
int main(){

    float rankine, reaumur;

    printf("Digite a temperatura reaumur convertido para rankine: ");
    scanf("%f",&rankine);

    reaumur = (rankine / 1.8 + 273.15) * 0.8;

    printf("O resultado da conversão de rankine é: %.2f",reaumur);

    return 0;

}