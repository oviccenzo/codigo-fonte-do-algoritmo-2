#include "cstdio"

int dobro(int x);

int main(){
    int num;
    scanf("%d",&num);
    int resultado = dobro(num);
    printf("Dobro de %d e %d\n",num,resultado);
    return 0;
}

int dobro(int x){
    return x*x;
}