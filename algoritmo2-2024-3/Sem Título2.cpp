#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[200];
    float nota;
} Aluno;

Aluno aluno_especial[3];
char nome[200];
int posicao;

int main() {

int i = 0;
setlocale(LC_ALL,"portuguese");

for(i=0; i<5; i++) {
    aluno_especial[i].codigo = 0;
    strcpy(aluno_especial[i].nome, "NULL");
    aluno_especial[i].nota = 0.0;
}

for(i=0; i<5; i++) {
    printf(" \n O c�digo do aluno especial �: %d ", aluno_especial[i].codigo);
    printf(" \n O nome do aluno especial �: %s ", aluno_especial[i].nome);
    printf(" \n A nota do aluno especial �: %.2f ", aluno_especial[i].nota);
    printf(" \n ------------------------------------------------------------------------");
}

printf(" \n \n");

for(i=0; i<5; i++) {
    printf(" Digite o c�digo do aluno especial: ");
    scanf("%d%*c", &aluno_especial[i].codigo);
    printf(" Digite o nome do aluno especial: ");
    scanf("%s%*c", &aluno_especial[i].nome);
    printf(" Digite a nota do aluno especial: ");
    scanf("%f%*c", &aluno_especial[i].nota);
    printf(" \n ------------------------------------------------------------------------\n");
}

for(i=0; i<5; i++) {
    printf(" \n O c�digo do aluno especial �: %d ", aluno_especial[i].codigo);
    printf(" \n O nome do aluno especial �: %s ", aluno_especial[i].nome);
    printf(" \n A nota do aluno especial �: %.2f ", aluno_especial[i].nota);
    printf(" \n ------------------------------------------------------------------------");
}

printf(" \n ");

printf(" \n Digite um nome: ");
scanf("%s%*c", nome);

for(i=0; i<5; i++) {
    if(strcmp(nome, aluno_especial[i].nome)== 0) {
        printf("\n Registro encontrado! ");
        posicao = i;
    } else {
        posicao = -1;
    }
}

if(posicao = -1) {
    printf(" \n Registro n�o encontrado! ");
} else {
    printf(" \n Nome Encontrado");
    printf(" \n Nome �: %s", nome);
    printf(" \n O c�digo do aluno especial �: %d ", aluno_especial[posicao].codigo);
    printf(" \n O nome do aluno especial �: %s ", aluno_especial[posicao].nome);
    printf(" \n A nota do aluno especial �: %.2f ", aluno_especial[posicao].nota);
    printf(" \n ------------------------------------------------------------------------");
}

for(i=0; i<5; i++) {
    if((aluno_especial[i].nota>=4)&(aluno_especial[i].nota<=7)) {
        printf(" \n O c�digo do aluno especial �: %d ", aluno_especial[i].codigo);
        printf(" \n O nome do aluno especial �: %s ", aluno_especial[i].nome);
        printf(" \n A nota do aluno especial �: %.2f ", aluno_especial[i].nota);
        printf(" \n ------------------------------------------------------------------------");
    } else {
        posicao = -1;
    }
}

if(posicao = -1) {
    printf("\n N�o h� registros com esta configura��o!");
}

return 0;

}
