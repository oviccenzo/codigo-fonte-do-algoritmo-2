#include <stdio.h>
int main(){
	
	int totalDeAluno,nota,i;
	float somaDaMedia = 0.0,media;
	
	//calcular quantidade de aluno
	printf("digite o numero de aluno: ");
	scanf("%d",&totalDeAluno);
	
	//leitura da nota do aluno
	for(i = 1; i <= totalDeAluno; i++){
		printf("digite a nota %d: ",i);
		scanf("%d",&nota);
		//somaDaNota = somaDaNota + nota;
		somaDaMedia += nota;
	}
	
	//soma da media da nota do aluno
	somaDaMedia = somaDaMedia / totalDeAluno;
	
	printf("a media da nota do aluno e: %.2f\n",somaDaMedia);
	
	return 0;
}
