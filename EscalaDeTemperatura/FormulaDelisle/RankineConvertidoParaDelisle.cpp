#include <cstdio>
int main(){

    float de,ra;

    printf("Digite a temperatura rankine convertido para delisle: ");
    scanf("%f",&de);

    ra = 671.67 - de * 1.2;

    printf("O resultado da conversão de delisle é:  %.2f",ra);

    return 0;
}