#include <cstdio>

int main(){


    char vet_char[3] = {'a','b','c'};
    printf("O vetor foi declarado como char: \n");
    printf("Vet + 1: %p\n",(void*)(vet_char + 1));
    printf("Vet + 2: %p\n",(void*)(vet_char + 2));
    printf("Vet + 3: %p\n",(void*)(vet_char + 3));
    printf("\n");

    int vet_int[3] = {1,2,3};
    printf("O vetor foi declarado como int: \n");
    printf("Vet + 1: %p\n", (void*)(vet_int + 1));
    printf("Vet + 2: %p\n", (void*)(vet_int + 2));
    printf("Vet + 3: %p\n", (void*)(vet_int + 3));
    printf("\n");

    float vet_float[3] = {1.1f,2.2f,3.3f};
    printf("O vetor foi declarado como float: \n");
    printf("Vet + 1: %p\n", (void*)(vet_float + 1));
    printf("Vet + 2: %p\n", (void*)(vet_float + 2));
    printf("Vet + 3: %p\n", (void*)(vet_float + 3));
    printf("\n");

    double vet_double[3] = {1.1,2.2,3.3};
    printf("O vetor foi declarado como double: \n");
    printf("Vet + 1: %p\n", (void*)(vet_double + 1));
    printf("Vet + 2: %p\n", (void*)(vet_double + 2));
    printf("Vet + 3: %p\n", (void*)(vet_double + 3));
    printf("\n");
    
}