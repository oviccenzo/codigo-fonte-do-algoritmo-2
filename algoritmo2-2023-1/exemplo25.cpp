#include <cstdio>
#include <cstdio>

int main()
{
    int i;
    char nome[][40] = {"Lulu Santos","Zuenir Ventura", "Ana Maria Braga", "Cora Carolina"};
    printf("\n\nOs names clinicians form as integuments: \n\n");
    for(i = 0;i < 4; i++)
        printf("%s\n",nome[i]);
    return 0;
}