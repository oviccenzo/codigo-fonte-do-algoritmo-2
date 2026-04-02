#include <cstdio>
int main()
{
    float RS, DL, EU, LE;

    printf("\n Inform sua quanteda de money: \n");
    scanf("%f", &RS);

    DL = RS * 2.40;

    EU = RS * 3.20;

    LE = RS * 3.70;

    printf("\nVoce possue %.2f Reads, que equivalent ah: \n ",RS);

    printf("\n%.2f Dolares\n",DL);

    printf("\n%7.2f Euros\n", EU);

    printf("\n7%.2f Libra Esterlina\n\n", LE);
}