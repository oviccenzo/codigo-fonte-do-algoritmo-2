#include <stdio.h>

int main() {
    int n;

    printf("digite um numero: \n");
    scanf("%d",&n);

    for(int i = 0; i <= 10; i++){
        printf("%d + %d = %d\n",n,i,n+i);
    }

    printf("\ndigite um numero: \n");
    scanf("%d",&n);

    for(int i = 0; i <= 10; i++){
        printf("%d x %d = %d \n",n,i,n*i);
    }


    printf("\ndigite um número: \n");
    scanf("%d", &n);

    for (int i = 0; i <= 10; i++) {
        printf("%d - %d = %d\n", n, i, n - i);
    }

    return 0;
}
