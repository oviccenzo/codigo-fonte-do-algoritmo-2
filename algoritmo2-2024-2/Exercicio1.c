#include <stdio.h>


 	float nota1, nota2,nota3,media;


void le_nota(){
	printf("Digite a primeira nota: \n");
	scanf("%f",&nota1);
	printf("Digite a segunda nota: \n");
	scanf("%f",&nota2);
	printf("Digite a terceira nota: \n");
	scanf("%f",&nota3);
}

void f_media(){
	
	media = (nota1 * 2 + nota2 * 3 + nota3 * 4)/ 9;
}

void imprimir(){
	
	printf("imprimir a media das tres prova: %f",media);
}

void main(){
	
 	le_nota();
	f_media();
	imprimir();
}


