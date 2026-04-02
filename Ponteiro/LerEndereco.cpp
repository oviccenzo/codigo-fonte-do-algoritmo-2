#include <cstdio>

int main(){

    int x;
    int *ptr;
    x = 5;
    ptr = &x;
    printf("O endereço de x eh: %d\n",*ptr);
    *ptr = 10;
    printf("Agora x vale: %d\n",*ptr);

    return 0;
}