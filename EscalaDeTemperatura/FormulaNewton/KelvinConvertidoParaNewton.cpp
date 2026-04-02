#include <cstdio>
int main(){

    float newton, kelvin;

    printf("Digite a temperatura kelvin convertido para newton: ");
    scanf("%f",&newton);

    kelvin = newton * 100/33 + 273.15;

    printf("O resultado da conversão newton é: %.2f",kelvin);

    return 0;
}