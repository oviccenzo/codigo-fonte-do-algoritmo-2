#include <cstdio>
int main(){

    float delisle,romer;

    printf("Digite a temperatura romer convertido para delisle: ");
    scanf("%f",&delisle);

    romer = 60 - delisle * 0.65;

    printf("O resultado da conversão de delisle é: %.2f",romer);

    return 0;
}