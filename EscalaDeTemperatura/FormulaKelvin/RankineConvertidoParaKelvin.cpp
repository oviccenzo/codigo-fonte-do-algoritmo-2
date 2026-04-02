#include <cstdio>
int main(){

    float rankine,kelvin;

    printf("Digite a temperatura rankine convertido para kelvin: ");
    scanf("%f",&kelvin);

    rankine = kelvin * 1.8;

    printf("O resultado da conversão rankine para kelvin é: %.2f",rankine);

    return 0;
}