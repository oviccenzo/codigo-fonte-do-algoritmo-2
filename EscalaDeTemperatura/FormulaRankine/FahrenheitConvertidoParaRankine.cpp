#include <cstdio>
int main(){

    float rankine, fahrenheit;

    printf("Digite a temperatura fahrenheit convertido para rankine: ");
    scanf("%f",&rankine);

    fahrenheit = rankine - 459.67;

    printf("O resultado da conversão rankine é: %.2f",fahrenheit);

    return 0;
}