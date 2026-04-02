#include <cstdio>

int main(){

    int a, b, c, *ptr;

    a = 90;
    b = 82;
    c = 43;
    
    ptr = &a;

    printf("Valor de ptr %p, Conteudo de ptr: %d\n",ptr,*ptr);
    printf("B: %d, C: %d",b,c);
}