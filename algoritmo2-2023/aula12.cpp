#include <cstdio>
int main ()
{
    int i,s = 0;
    for(i = 12/3*2; true; i++) {
        s = s + i;

        printf("Soma = %d \n",s);
        return 0;
    }
}