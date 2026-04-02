#include <cstdio>
int main(){

    float newton, delisle;

    printf("Digite a temperatura delisle convertido para newton: ");
    scanf("%f",&newton);

    delisle = (33 - newton) * 50/11;

    printf("O resultado da conversão de newton é:  %.2f",delisle);

    return 0;
}