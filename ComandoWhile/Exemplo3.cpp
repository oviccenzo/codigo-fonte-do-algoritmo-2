#include <cstdio>

int main(){

    int contador = 0,multiplicacao;
    int a,f;

    printf("Digite um numero(a): ");
    scanf("%d",&a);

    printf("Digite dois numeros(f): ");
    scanf("%d",&f);
    
    multiplicacao = a * f;
    while(contador <= f){
        printf(" %d \n",multiplicacao);
        contador++;
        multiplicacao *= a;
    }
}