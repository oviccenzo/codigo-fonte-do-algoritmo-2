#include "stdio.h"
float f_media(float nota1,float nota2 , float nota3){
	return(nota1 * 2 + nota2 * 3 + nota3 * 4) / ( 2 + 3 + 4);
}

int main(){
	float nota1,nota2, nota3,mediaDaNotaPonderada;
	
	printf("calcular a primeira nota da prova: ");
	scanf("%f",&nota1);
	
	printf("calcular a segunda nota da prova: ");
	scanf("%f",&nota2);

	printf("calcular a terceira nota da prova: ");
	scanf("%f",&nota3);
	
	mediaDaNotaPonderada = f_media(nota1,nota2,nota3);
	
	printf("a media ponderada das tres nota e: %.2f",mediaDaNotaPonderada);
	
	return 0;
}
