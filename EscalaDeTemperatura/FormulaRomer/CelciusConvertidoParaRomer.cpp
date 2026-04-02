#include <cstdio>
int main(){

    float celcius,romer;

    printf("Digite a temperatura celcius convertido para romer: ");
    scanf("%f",&romer);

    celcius = romer - 7.5 * 40/21;

    printf("O resultado da conversão de celcius é: %.2f",celcius);

    return 0;
}