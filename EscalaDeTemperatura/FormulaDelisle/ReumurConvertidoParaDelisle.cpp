#include <cstdio>
int main(){

    float re,de;

    printf("Digite a temperatura reaumur convertido para delisle: ");
    scanf("%f",&de);

    re = 80 - de * 8/15;

    printf("O resultado da conversão de delisle: %.2f",re);

    return 0;
}