#include <cstdio>
int main(){

    float c,de;

    printf("Digite a temperatura celsius convertido para delisle: ");
    scanf("%f",&de);

    c =  (100 - de) * 2/3;

    printf("O resultado da conversão de delisle é: %.2f",c);

    return 0;
}