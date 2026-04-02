#include "cstdio"
#include "cstdlib"

typedef struct pessoa{
    int idade;
    char trabalha;
    char estuda;

};

int main() {

    struct pessoa P,Q;
    P.idade = 20;
    P.trabalha = 's';
    P.estuda = 'n';
    Q = P;
    printf("Pessoa C: %d %c %c\n",P.idade,P.trabalha,P.estuda);
    printf("Pessoa B: %d %c %c\n",Q.idade,Q.trabalha,Q.estuda);

    return 0;
}

