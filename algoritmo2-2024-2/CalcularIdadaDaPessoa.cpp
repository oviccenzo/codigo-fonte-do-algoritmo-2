#include <stdio.h>
int main(){
	
	char nome1[15],nome2[15];
	float idade1,idade2;
	
	printf("Digite o nome da pessoa: ");
	scanf("%s",nome1); 
	
	printf("Digite a idade da pessoa: ");
	scanf("%f",&idade1);
	
	printf("Digite O nome da pessoa: ");
	scanf("%s",nome2);
	
	printf("Digite a idade da pessoa: ");
	scanf("%f",&idade2);
	
	float resultado = (idade1 + idade2) / 2.0;
	
	printf("Nome1 = %s, Nome2 = %s\n",nome1,nome2);
	printf("O resultado da idade da pessoa e: %.2f",resultado);
	
	
	return 0;
	}
