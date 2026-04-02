#include <stdio.h>

struct TAluno{

	int matricula;
	char sexo;
	int idade;
	float mediaGlobal;
};

int main(){

	struct TAluno alunoA, alunoB;

	//Leitura do dados do aluno A

	printf("Digite os dados do aluno A\n");
	printf("Digite a matricula do aluno A: \n");
	scanf("%d",&alunoA.matricula);
	printf("Digite o sexo (M/F) do aluno A: ");
	scanf("%c", &alunoA.sexo);
	printf("Digite a idade do aluno A: ");
	scanf("%d", &alunoA.idade);
	printf("Digite a media global do aluno A: ");
	scanf("%f", &alunoA.mediaGlobal);

	//Leitura do dados do aluno B

	printf("Digite os dados do aluno B\n");
	printf("Digite a matricula do aluno B: \n");
	scanf("%d",&alunoB.matricula);
	printf("Digite o sexo (M/F) do aluno B: ");
	scanf("%c", &alunoB.sexo);
	printf("Digite a idade do aluno B: ");
	scanf("%d", &alunoB.idade);
	printf("Digite a media global do aluno B: ");
	scanf("%f", &alunoB.mediaGlobal);
}
