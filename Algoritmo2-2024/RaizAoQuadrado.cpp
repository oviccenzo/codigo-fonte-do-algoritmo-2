//18/11/2023
//Exemplos: prototipo
#include <cstdio>
int ElevarAoQuadrado(int a); //Prototipo da funcao
int main(){
    int num;
    printf("Entre com um numero: ");
    scanf("%d",&num);
    num = ElevarAoQuadrado((num)); // utilizacao da funcao
    printf("\n\nO seu quadrado vale: %d\n",num);
    return 0;
}
int ElevarAoQuadrado(int a){ //Descricao da funcao
    return (a*a);
}