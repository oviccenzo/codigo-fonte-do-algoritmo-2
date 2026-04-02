#include <cstdio>
int main(){

    float romer,reaumur;

    printf("Digite a temperatura romer convertido para reaumur: ");
    scanf("%f",&reaumur);

    romer = reaumur * 21/32 + 7.5;

    printf("O resultado da conversão de reaumur é: %.2f",romer);

    return 0;
}