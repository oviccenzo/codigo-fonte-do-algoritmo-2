//
// Created by Robert L Resende on 30/10/24.
//
#include "cstdio"
#include "cstdlib"

struct TAluno{
    int matricula;
    char sexo;
    int idade;
    float mediaglobal;
};

int main(){

    struct TAluno alunoA, alunoB;

    //Dado do aluno A
    printf("digite a matricula do aluno A: ");
    scanf("%d",&alunoA.matricula);

    getchar();

    printf("digite o sexo (masculino/feminino) do aluno A: ");
    scanf("%c",&alunoA.sexo);
    printf("digite a idade do aluno A: ");
    scanf("%d",&alunoA.idade);
    printf("digite a media global do aluno A: ");
    scanf("%f",&alunoA.mediaglobal);

    //Dado do aluno B
    printf("digite a matricula do aluno B: ");
    scanf("%d",&alunoB.matricula);

    getchar();

    printf("digite o sexo (masculino/feminino) dp aluno B: ");
    scanf("%c",&alunoB.sexo);
    printf("digite a idade do aluno B: ");
    scanf("%d",&alunoB.idade);
    printf("digite a  media global do aluno B: ");
    scanf("%f",&alunoB.mediaglobal);

    //imprimir dado do aluno A
    printf("Digite o dados do Aluno A: \n");
    printf("A matricula: %d\n",alunoA.matricula);
    printf("A idade: %d\n",alunoA.idade);
    printf("O sexo: %c\n",alunoA.sexo);
    printf("A media globol: %.2f\n",alunoA.mediaglobal);

    //imprimir dado do aluno B
    printf("Digite o dados do Aluno B: \n");
    printf("A matricula: %d\n",alunoB.matricula);
    printf("A idade: %d\n",alunoB.idade);
    printf("O sexo: %c\n",alunoB.sexo);
    printf("A media global:  %.2f\n",alunoB.mediaglobal);

    return 0;
}