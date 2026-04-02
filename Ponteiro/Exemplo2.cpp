#include <cstdio>

int main(){

    int count = 12 , *ptr = &count;
    printf("O numero do contador e: %d \n", *ptr);
    printf("\n");

    int *ptr1_idade, idade;
    idade = 30;
    ptr1_idade = &idade;
    *ptr1_idade = 28;
    printf("A idade e: %d\n" , *ptr1_idade);

}