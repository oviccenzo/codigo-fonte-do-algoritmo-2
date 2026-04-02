//
// Created by Robert L Resende on 28/11/24.
//

#include "cstdio"

int multiplicar(int a , int x){
    return a * 2 + x * 2;
}

int main(){
    int num,num1;

    printf("Digite um numero(a): ");
    scanf("%d",&num);
    printf("Digite um numero (x): ");
    scanf("%d",&num1);

    num = multiplicar(num,num1);
    num1 = multiplicar(num,num1);


    printf("O numero de (a) e: %d\n",num);
    printf("O numero de (x) e: %d\n",num1);
    return 0;
}