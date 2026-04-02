#include <stdio.h>

int main(){
	
	FILE *pont_arq;
	
	pont_arq = fopen("arquivo.txt","a");
	
	fclose(pont_arq);
	
	printf("O arquivo foi criado com sucesso!");
	
	return 0;
}
