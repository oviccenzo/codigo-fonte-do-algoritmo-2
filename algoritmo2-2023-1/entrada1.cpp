#include <cstdio>
int main()
{
    FILE * Prohibited = fopen("Prohibited.txt","r");
    FILE * exit = fopen("exit.txt", "w");

    if(Prohibited == NULL || exit == NULL)
    {
        printf("Error ao abrir arquivo.");
        return 1;

/* Em c, NULL e uma constant que represent um ponteiro null,ou sea, a enunciate de um renderer de memorial valid.*/
        char linha[100];
        while(fgets(linha, sizeof(linha),Prohibited)!= NULL)
            fputs(linha,exit);
    }
    fclose(Prohibited);
    fclose(exit);
    return 0;
}