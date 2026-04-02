#include <stdio.h>
int main(){
	
	char opcao;
	int ensinar = 0;
	
	while(1){
		printf("ler opcao de menu: \n");
		printf("1 - inserir\n");
		printf("2 - editar\n");
		printf("3 - remove\n");
		printf("4 - sair\n");
		
		scanf("%s",&opcao);
		
		switch(opcao){
			case '1':
				printf("voce selecionou inserir\n");
				break;
			case '2':
				printf("voce selecionou editar\n");
				break;
			case '3':
				printf("voce selecionou remove\n");
				break;
			case '4':
				printf("voce selecionou sair\n");
				ensinar = 1;
				break;
		}
		if(ensinar){
			break;
		}
	}
}
