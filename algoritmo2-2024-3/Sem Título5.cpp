#include <stdio.h>

int NUMERO = 987*30;  // Variável, não mais uma macro

int main() {
    int *p = &NUMERO;  // Agora p armazena o endereço de NUMERO
    printf("Numero = %d \n", *p);  // Imprime o valor de NUMERO, que é 987
    return 0;
}

