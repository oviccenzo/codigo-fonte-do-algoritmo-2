//20/11/2023
//Exemplo 6:
//Leitura e impressao de 5 strings
#include <cstdio>
int main()
{
    char strings[5][6];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("\n\nDigite uma frase ou palavra: ");
        gets(strings[i]);
    }
    printf("\n\nAs frases digitadas foram as seguintes: \n\n");
    for ( i = 0; i < 5; i++)
        printf("%s\n",strings[i]);
    return (0);
}