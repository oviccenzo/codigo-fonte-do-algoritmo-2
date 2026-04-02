#include <cstdio>
int main(){

    float newton,fahrenheit;

    printf("Digite a temperatura newton convertido para fahrenheit: ");
    scanf("%f",&fahrenheit);

    newton = (fahrenheit - 32) * 11/60;

    printf("O resultado da conversão fahrenheit é: %.2f",newton);

    return 0;
}