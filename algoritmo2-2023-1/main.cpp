#include <cstdio>

float nota1, nota2 ,nota3 ,nota4,nota5 ,nota6, nota7 ,nota8 ,nota9,nota10 ,nota11 ,media;

void le_nota()
{
    printf("Entre com as notes: \n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    scanf("%f", &nota4);
    scanf("%f", &nota5);
    scanf("%f", &nota6);
    scanf("%f", &nota7);
    scanf("%f", &nota8);
    scanf("%f", &nota9);
    scanf("%f", &nota10);
    scanf("%f", &nota11);
}

void f_media()
{
     media = (nota1*1+nota2*2+nota3*3+nota4*4+nota5*5+nota6*6+nota7*7+nota8*8+nota9*9+nota10*10+nota11*11)/66;
}

void printous()
{
    printf("print the sum of the eleven tests: %f",media);
}

int main() {
    le_nota();
    f_media();
    printous();
}
