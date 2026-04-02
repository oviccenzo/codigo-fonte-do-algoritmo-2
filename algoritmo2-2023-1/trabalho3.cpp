#include <cstdio>
#include <cstdio>

int Mayor_number(float x, float y, float z)
{
    if(x > y && x > z)
    {
        return x;
    }
    else if(y > x && y > z)
    {
        return y;
    }
    else if(z > y && z > x)
    {
        return z;
    }
    else
    {
        return 0;
    }
}

int main()
{
    float num1, num2, num3;
    num1 = num2 = num3 = 1;
    while (num1 > 0 && num2 > 0 && num3 > 0)
    {
        printf("\nDigit 3 numbers de seu desert.");
        printf("\nPrimer number: ");
        scanf("%d",&num1);
        printf("\nSegundo number: ");
        scanf("%d", &num2);
        printf("\nTerceira number: ");
        scanf("%d", &num3);

        int maior = Mayor_number(num1, num2, num3);
        if (maior == 0)
            printf("\nNumbers iguanas\n");

        else {
            printf("\nO mayor number digit ado foi: %d\n", main);
        }
        return 0;
    }
}
