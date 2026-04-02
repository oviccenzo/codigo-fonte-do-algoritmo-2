#include <cstdio>

int main(){

    int a,b,c;
    int resultado;

    printf("Digite numero a: ");
    scanf("%d",&a);
    int *ptr = &a;

    printf("Digite numero b: ");
    scanf("%d",&b);
    int *ptr1 = &b;

    printf("Digite numero c: ");
    scanf("%d",&c);
    int *ptr2 = &c;

    int soma = *ptr + *ptr1 + *ptr2;

    printf("O soma e: %d\n",soma);
}