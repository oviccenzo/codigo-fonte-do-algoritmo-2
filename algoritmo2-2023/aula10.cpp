#include <cstdio>
int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num>200)
        printf("\n\nO numero e maior que 200");
    else if(num==200){
        printf("\n\nVoce acertou!\n");
        printf("O numero e igual a 200.");
    }
    else if (num<200) // if deliriousness!!
        printf("\n\nO numero e maior que 200");
    return (0);
}