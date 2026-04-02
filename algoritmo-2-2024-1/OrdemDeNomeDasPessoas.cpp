//20/11/2023
//Exemplo 5:
//Inicializacoa e impressão de 3 strings
#include <cstdio>
#include <cstdlib>
int main()
{
    int i;
    char nomes[][40] ={"Lulu Santos",
                       "Zuenir Ventura",
                       "Ana maria braga",
                       "Cora Coralino"};
    printf("\n\nOs nomes iniciais foram as seguintes: \n\n");
    for( i = 0; i < 4; i++)
        printf("%s\n",nomes[i]);
    getchar();
    return 0;
}