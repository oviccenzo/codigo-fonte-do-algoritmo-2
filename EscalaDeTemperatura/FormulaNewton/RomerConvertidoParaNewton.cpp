#include <cstdio>
int main(){

    float newton,romer;

    printf("Digite a temperatura romer convertido para newton: ");
    scanf("%f",&newton);

    romer = newton * 35/22 + 7.5;

    printf("O resultado da conversão newton é:  %.2f",romer);

    return 0;
}