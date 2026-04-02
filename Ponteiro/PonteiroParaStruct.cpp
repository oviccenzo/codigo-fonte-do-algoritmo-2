#include <cstdio>

typedef struct
{
    int matricula;
    float nota;
} TAluno;


int main(){

    TAluno a1;
    TAluno *ptrAluno = &a1;


    printf("Digite a matricula: ");
    scanf("%i",&a1.matricula); //a1.matricula = 555
    printf("Digite a nota: ");
    scanf("%f",&a1.nota); //a1.nota = 8.0

    printf("Matricula: %d nota: %.1f\n",
    a1.matricula,a1.nota);

    printf("Digite a nota: ");
    scanf("%f", &ptrAluno->nota); //(*ptrAluno).nota = 8.5

    printf("\nMatricula: %d nota: %.1f\n"
    ,(*ptrAluno).matricula,(*ptrAluno).nota);

    printf("Digite a nota: ");
    scanf("%f",&ptrAluno->nota);//ptrAluno->nota = 9.0;

    printf("\nMatricula: %d nota: %.1f\n",
    ptrAluno->matricula,ptrAluno->nota);

    getchar();
    return 0;
}