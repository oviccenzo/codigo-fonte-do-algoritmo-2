#include <cstdio>
int main(){

    float rankine, delisle;

    printf("Digite a temperatura delisle convertido para rankine: ");
    scanf("%f",&rankine);

    delisle = (671.67 - rankine) * 5/6;

    printf("O resultado da conversão rankine é:  %.2f",delisle);

    return 0;
}