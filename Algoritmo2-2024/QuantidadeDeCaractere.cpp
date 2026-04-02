//18/11/2023
//comando de repeticao
//exemplo 4:
#include <cstdio>
int main()
{
    int cont = 0;

    printf("Digite uma frase: \n");
    while(getchar()!='\r') //caractere <enter>
        cont++;
    printf("\nO numero de caracteres eh %d \n",cont);
    return 0;
}