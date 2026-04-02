#include <cstdio>
int main(){

    float reaumur, kelvin;

    printf("Digite a temperatura reaumur convertido para kelvin: ");
    scanf("%f",&kelvin);

    reaumur = (kelvin - 273.15 ) * 0.8;

    printf("O resultado da conversão rankine para kelvin: %.2f",reaumur);

    return 0;
}