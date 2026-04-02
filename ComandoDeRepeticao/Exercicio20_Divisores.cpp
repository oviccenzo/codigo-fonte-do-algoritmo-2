#include "cstdio"
int main(){

    int n;
    printf("digite um numero: ");
    scanf("%d",&n);

    printf("divisores de %d: ",n);
    for(int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ",i);
        }
    }

    printf("\n");
}