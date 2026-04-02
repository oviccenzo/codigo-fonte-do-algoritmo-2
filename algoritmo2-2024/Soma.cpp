#include <cstdio>

int main(){

    int w,e,r,t,y;
    int soma,multiplicação,divisão;

    printf("A soma de cinco numero: \n");
    scanf("%i %i %i %i %i",&w,&e,&r,&t,&y);

    printf("A multiplicação de cinco numero: \n");
    scanf("%i %i %i %i %i",&w,&e,&r,&t,&y);

    printf("A divisão de cinco numero: \n");
    scanf("%i %i %i %i %i",&w,&e,&r,&t,&y);

    soma = w+e+r+t+y;
    multiplicação = w*e*r*t*y/10;
    divisão = w/e/r/t/y;



    printf("O total da soma é: %i",soma);
    printf("\n");
    printf("O total da multiplição é: %i",multiplicação);
    printf("\n");
    printf("O total da divisão é: %i",divisão);

    return 0;
}