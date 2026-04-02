#include <cstdio>
int main(){

    float newton,rankine;

    printf("Digite a temperatura rankine convertido para newton: ");
    scanf("%f",&newton);

    rankine = newton * 60/11 + 491.67;

    printf("O resultado da conversão de newton é: %.2f",rankine);

    return 0;
}