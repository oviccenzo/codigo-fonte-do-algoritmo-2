#include "stdio.h"
int main(){
	
	const int funcionario = 3000;
	int contagem = 1;
	double tempo = 0;
	
	while(contagem < funcionario){
		contagem += contagem * 3;
		tempo += 0.25;
	}
	
	double horas = tempo / 60;
	printf("todos os fucionarios saberao da noticia em %.2f.\n",horas);
	
	return 0;
}
