#include <cstdio>

struct calcularTriangul{

//    int h,b;
};

int main(){

    int b,h;
//    struct calcularTriangul A;


    printf("A area base(B): ");
    scanf("%d",&h);

    printf("A area da altura(H): ");
    scanf("%d",&b);

    int a = (b * h) / 2;

    printf("O resultado da area do triangulo é: %.2d",a,"cm");

    return 0;
}