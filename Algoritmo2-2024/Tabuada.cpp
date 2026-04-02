#include <cstdio>
int main(){

    int numero;

    printf("Digite o numero de 1 a 10: ");
    scanf("%d",&numero);

    for(int i = 1;i < 100; i++) {
        printf("%d * %d = %.2f\n",i,numero,(float)(i*numero)); 
    }
}
