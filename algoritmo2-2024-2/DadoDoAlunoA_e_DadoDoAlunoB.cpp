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
	printf("Digite os dados do aluno A: \n");
	printf("Digite a matricula do aluno A: \n");
	scanf("%d",&alunoA.matricula);
    getchar();
	printf("Digite o sexo (M/F) do aluno A: ");
	scanf("%c", &alunoA.sexo);
	printf("Digite a idade do aluno A: ");
	scanf("%d", &alunoA.idade);
	printf("Digite a media global do aluno A: ");
	scanf("%f", &alunoA.mediaGlobal);

	//Leitura do dados do aluno B
	printf("Digite os dados do aluno B:\n");
	printf("Digite a matricula do aluno B: \n");
	scanf("%d",&alunoB.matricula);
    getchar();
	printf("Digite o sexo (M/F) do aluno B: ");
	scanf("%c", &alunoB.sexo);
	printf("Digite a idade do aluno B: ");
	scanf("%d", &alunoB.idade);
	printf("Digite a media global do aluno B: ");
	scanf("%f", &alunoB.mediaGlobal);

	//imprimir os dados do aluna A
	printf("Dados do aluno A e: \n");
	printf("matricula do aluno A e: %d\n", alunoA.matricula);
	printf("sexo do aluno A e: %c\n", alunoA.sexo);
	printf("idade do aluno A e: %d\n", alunoA.idade);
	printf("Media global do aluno A e: %.2f\n", alunoA.mediaGlobal);

	//imprimir os dados do aluna B
	printf("Dados do aluno B e: \n");
	printf("matricula do aluno B e: %d\n", alunoB.matricula);
	printf("sexo do aluno B e: %c\n", alunoB.sexo);
	printf("idade do aluno B e: %d\n", alunoB.idade);
	printf("Media global do aluno B e: %.2f\n", alunoB.mediaGlobal);

}
