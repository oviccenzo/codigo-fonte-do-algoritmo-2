#include <stdio.h>
#include <stdlid.h>
#include <time.h>

int main(){
    clock_t inicio, fim;
    unsigned long int tempo;
    inicio = clock();
    fim = clock();
    tempo = (fim - inicio) * 1000 /CLOCKS_PER_SEC;
    printf("tempo: %lu milissegundos\n",tempo);

    return 0;
}