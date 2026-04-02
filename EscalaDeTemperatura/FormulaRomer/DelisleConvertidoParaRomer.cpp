#include <cstdio>
int main(){

    float romer,delisle;

    printf("Digite a temperatura delisle convertido para romer: ");
    scanf("%f",&romer);

    delisle = (60 - romer) * 20/7;

    printf("O resultado da conversão de romer é: %.2f",delisle);

    return 0;
}