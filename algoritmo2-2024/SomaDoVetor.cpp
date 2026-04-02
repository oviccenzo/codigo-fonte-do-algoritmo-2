#include <cstdio>

void soma(float a , float b,float c,float d){

    float resultado = a + b + c + d;
    printf("A soma dos quatro numeros e: %.2f",resultado);
}

int main(){

    float a,b,c,d;
    printf("Digite primeiro numero: ");
    scanf("%f",&a);
    
    printf("Digite segundo numero: ");
    scanf("%f",&b);
    
    printf("Digite o terceiro numero: ");
    scanf("%f",&c);
    
    printf("Digite o quarto numero: ");
    scanf("%f",&d);

    soma(d,c,b,a);
    return 0;
}