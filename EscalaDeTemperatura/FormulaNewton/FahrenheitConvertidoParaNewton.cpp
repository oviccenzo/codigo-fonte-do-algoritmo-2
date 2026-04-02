#include <cstdio>
int main(){

    float newton,fahrenheit;

    printf("Digite a temperatura fahrenheit para newton: ");
    scanf("%f",&newton);

    fahrenheit = newton * 60/11 + 32;

    printf("O resultado da conversão de newton é: %.2f",fahrenheit);

    return 0;
}