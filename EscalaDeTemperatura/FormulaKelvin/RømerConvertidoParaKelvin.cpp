#include <cstdio>
int main(){

    float romer, kelvin;

    printf("Digite a temperatura romer convertido para kelvin: ");
    scanf("%f",&kelvin);

    romer = (kelvin - 273.15) * 21/40 + 7.5;

    printf("O resultado daa conversão romer para kelvin é: %.2f",romer);

    return 0;
}