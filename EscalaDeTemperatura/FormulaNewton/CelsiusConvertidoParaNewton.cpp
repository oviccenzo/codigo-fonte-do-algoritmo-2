#include <cstdio>
int main(){

    float newton,celsius;

    printf("Digite a temperatura newton convertido para celsius: ");
    scanf("%f",&newton);

    celsius = newton * 100/33;

    printf("O resultado da conversão de newton é: %.2f",celsius);

    return 0;
}