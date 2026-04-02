//18/11/2023
//Comando do-while
//Exemplo 3:
#include <cstdio>
int main()
{
    int a = 2;
    do {
        a = a + 20;
        printf("Valor de a: %d\n",a);
    } while(a < 200);
    return 0;
}