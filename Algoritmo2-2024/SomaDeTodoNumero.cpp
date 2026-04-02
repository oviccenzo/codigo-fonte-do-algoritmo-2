//18/11/2023
//Exemplo 5 - While aninhados:
#include <cstdio>
int main()
{
    int i = 2;
    while(i < 4){
        int j = 45;
    while(j < 55){
        int k = i + j;
        printf("%d + %d = %d \n",i,j,k);
        j++;
    }
    i++;
    }
    return 0;
}