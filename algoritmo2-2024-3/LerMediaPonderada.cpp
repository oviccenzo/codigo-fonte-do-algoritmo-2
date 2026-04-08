#include <stdio.h>


float f_media(float nota1 , float nota2 ,float nota3){
	return (nota1 * 2 + nota2 * 3 + nota3 + 4)/(2 + 3 + 4);
}

int main(){
	
	float nota1, nota2,nota3;
	
	printf("Calcular a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("Calcular a segunda nota: ");
	scanf("%f",&nota2);
	
	printf("Calcular a terceira prova: ");
	scanf("%f",&nota3);
	
	float somaDaMedia = f_media(nota1,nota2,nota3);
	
	printf("A soma da media das tres nota e: %.2f",f_media);
	
	return 0;
}


