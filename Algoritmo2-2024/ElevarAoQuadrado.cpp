//18/11/2023
//exemplo:
#include <cstdio>
int ElevarAoQuadrado(int a)
{
    return (a*a);
}

int main()
{
    int num;
    printf("Entre com um numero: ");
    scanf("%d",&num);
    num = ElevarAoQuadrado(num);
    printf("\n\nO seu quadrado vale: %d\n",num);
    return 0;
}