//18/11/2023
//Comando if-else-if
#include <cstdio>
int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num>10)
        printf("\n\nO numero e maior que 10");
    else if(num==10){
        printf("\n\nVoce acertou!\n");
        printf("O numero e igual a 10.");
    }
    else if (num<10) // if desnecessario!!
        printf("\n\nO numero e menor que 10");
    return (0);
}