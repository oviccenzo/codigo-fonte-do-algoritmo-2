#include <stdio.h>
int main(){

    float newton,celsius;

    printf("Digite a temperatura celsius para  newton: ");
    scanf("%f",&newton);

    celsius = newton * 100/33;

    printf("O resultado da conversão de celsius para newton é: %.2f\n",celsius);

    return 0;
}