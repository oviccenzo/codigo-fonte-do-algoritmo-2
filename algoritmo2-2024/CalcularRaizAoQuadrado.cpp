//
// Created by Robert L Resende on 27/11/24.
//
#include "cstdio"

int elevarAoQuadrado(int a){
    return (a*a);
}

int main(){

    int a,x,y,z,num,num2,num3,num4;

    printf("Digite um numero a: ");
    scanf("%d",&num);

    printf("Digite um numero x: ");
    scanf("%d",&num2);

    printf("Digite um numero y: ");
    scanf("%d",&num3);

    printf("Digite um numero z: ");
    scanf("%d",&num4);

    num = elevarAoQuadrado(num);
    num2 = elevarAoQuadrado(num2);
    num3 = elevarAoQuadrado(num3);
    num4 = elevarAoQuadrado(num4);

    printf("\nO seu quadrado e: %d\n",num);
    printf("\nO seu quadrado e: %d\n",num2);
    printf("\nO seu quadrado e: %d\n",num3);
    printf("\nO seu quadrado e: %d\n",num4);
}




