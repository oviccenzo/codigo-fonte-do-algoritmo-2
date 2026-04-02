#include <cstdio>
int ElevarAoQuadrado(int a);
int main()
{
    int num;
    printf("Entre com um number: ");
    scanf("%d", &num);
    num = ElevarAoQuadrado(num);
    printf("\n\nO seu quadrado vale: %d\n",num);
    return 0;
}
int ElevarAoQuadrado(int a){
    return (a*a);
}
