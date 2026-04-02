//
// Created by Robert L Resende on 27/11/24.
//
#include "cstdio"
int ElevarAoQuadrado(int a);

int main(){

    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);

    num = ElevarAoQuadrado(num);

    printf("\nO seu quadrado vale: %d\n",num);
    return 0;
}

int ElevarAoQuadrado(int a){
    return a*a;
}