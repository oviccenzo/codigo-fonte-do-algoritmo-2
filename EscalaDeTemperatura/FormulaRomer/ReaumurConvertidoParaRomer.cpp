#include <cstdio>
int main(){

    float romer, reaumur;

    printf("Digite a temperatura reaumur convertido para romer: ");
    scanf("%f",&romer);

    reaumur = (romer - 7.5) * 32/21;

    printf("O resultado da conversão de romer: é %.2f",reaumur);

    return 0;
}