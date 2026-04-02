#include <cstdio>
int main(){

    float c,re;

    printf("Digite a temperatura reaumur convertido para celcius: ");
    scanf("%f",&c);

    re =  c * 0.8;

    printf("O resultado da conversão de celcius é: %.2f",re);

    return 0;
}