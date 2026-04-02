#include <cstdio>

int pow(int soma, double d);

int main()
 {
    int a1, a2, a3, a4,a5,a6,a7,a8,soma;

    printf("Digit a1: ");
    scanf("%d", &a1);

    printf("Digit a2: ");
    scanf("%d", &a2);

    printf("Digit a3: ");
    scanf("%d", &a3);

    printf("Digit a4: ");
    scanf("%d", &a4);

    printf("Digit a5: ");
    scanf("%d", &a5);

    printf("Digit a6: ");
    scanf("%d",&a6);

    printf("Digit a7: ");
    scanf("%d",&a7);

    printf("Digit a8: ");
    scanf("%d",&a8);

    soma = a1 + a2 + a3 + a4 + a5+ a6+ a7+ a8;

    int r4 = pow(soma, 1.0/4); //Here

    printf("Soma = %d\n",soma);
    printf("O valor = %d\n", r4);

     return 0;
 }


