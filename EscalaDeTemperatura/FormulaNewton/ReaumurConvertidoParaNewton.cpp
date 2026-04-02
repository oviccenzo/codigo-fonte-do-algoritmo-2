#include <cstdio>
int main(){

    float re,n;

    printf("Digite a temperatura reaumur convertido para newton: ");
    scanf("%f",&n);

    re = n * 80/33;

    printf("O resultado da conversão de newton é: %.2f",re);

    return 0;
}