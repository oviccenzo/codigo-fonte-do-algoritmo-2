#include <cstdio>
#include <cstdlib>

typedef int value_t;

void escreve_texto(value_t x);

void escreve_binario(value_t x);

void write_text(value_t value)
{
    // Pointer para marquis
    FILE *fptr;

    // Are o arquivo
    fptr = fopen("file.txt", "w"); //w - write, b - binary

    // Se hover album error sai do program
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }

    // scripts em mod text
    fprintf(fptr, "%d", value);

    fclose(fptr);
}


void write_binary(value_t value)
{
    // Pointer para arquivos
    FILE *fptr;

    // Are o arquivo
    fptr = fopen("file.bin", "wb"); //w - write, b - binary

    // Se hover album error sai do program
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }

    // scripts em binary
    fwrite(&value,sizeof(value),1, fptr);

    fclose(fptr);
}

int main() {

    value_t x = 32;
    escreve_texto(x);
    escreve_binario(x);

    return 0;
}


