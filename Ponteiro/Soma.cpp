#include <cstdio>

int main(){

    int a,d,resultado = 23;
    int *ptr = &resultado;

    printf("Digite um numero: ");
    scanf("%d",&a);

    printf("Digite dois numero: ");
    scanf("%d",&d);

    (*ptr) = a + d * resultado;

    printf("A soma de dois numeros do ponteiro e: %d",*ptr);
}