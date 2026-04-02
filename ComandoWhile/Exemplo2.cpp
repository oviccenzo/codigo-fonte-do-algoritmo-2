#include <cstdio>

int main(){

    int contador = 0,soma;
    int a,d;

    printf("Digite numero um(a): ");
    scanf("%d",&a);

    printf("Digite dois numero(d): ");
    scanf("%d",&d);
    
    soma = a + d;

    while(contador <= d){
        printf(" %d \n",soma);
        contador++;
        soma += a;
    }
}