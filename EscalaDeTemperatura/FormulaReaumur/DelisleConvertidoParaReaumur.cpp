#include <cstdio>
int main(){

    float re,de;

    printf("Digite a temperatura delisle convertido para reaumur: ");
    scanf("%f",&re);


    de = ( 80 - re ) * 1.875;

    printf("O resultado da conversão de reaumur é: %.2f",de);

    return 0;
}