#include <stdio.h>

int main() {
    float rankine, kelvin;

    printf("Digite a temperatura Rankine para converter para Kelvin: ");
    scanf("%f", &rankine);

    kelvin = rankine * 1.8;

    printf("O resultado da conversão de rankine para Kelvin é: %.2f\n", kelvin);

    return 0;
}
