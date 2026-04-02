#include <cstdio>

void message() {
    printf("Ola de novo!!!\n");
}

int main() {
    start: // Label de início

    printf("Ola world!!!\n");

    // Chama a função message
    message();

    // Salta para o label end
    goto end;

    // Código não executado
    printf("Este texto nunca será exibido.\n");

    end: // Label de fim
    return 0;
}
