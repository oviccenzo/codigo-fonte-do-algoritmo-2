//18/11/2023
//comando if-else:
#include <cstdio>
int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if(num==10){
        printf("\n\nVoce acertou!");
        printf("O numero e igual a 10.\n");
    }
    else{
        printf("\n\nVoce errou!\n");
        printf("O numero e diferente de 10.\n");
    }
    return (0);
}