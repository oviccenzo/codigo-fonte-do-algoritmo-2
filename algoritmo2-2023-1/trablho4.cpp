#include <cstdio>

int factorial(int n)
{
    int factorial = 1;
    if(n == 0 || n == 1){
        return (1);
    }else{
        while (n != 1){
            factorial = n * ( n - 1 );
        }
        return (factorial);
    }
}

int main()
{
    int num = 0;
    while(num <= 0)
    {
        printf("Digit um number: \n");
        scanf("%d", &num);
        int result = factorial(num);
        printf("\n O factorial e: %d\n", result);

    }
}

