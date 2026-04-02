#include <stdio.h>

int main(){
	char conceito;
	
	printf("Digite o conceito: ");
	scanf("%c",&conceito);
	
	switch(conceito){
		case 'a':
			printf("\nExcelente!\n");
			break;
		case 'b':
			printf("\nUltimo\n");
			break;
		case 'c':
			printf("\nBom!\n");
			break;
		case 'd':
			printf("\nRegular!\n");
			break;
		case 'e':
			printf("\nRuim!\n");
			break;
		case 'f':
			printf("\nNos vemos de novo no ano que vem...\n");
			break;
		default:
			printf("\nErro: conceito inexistente\n");
	}
	return 0;
}
