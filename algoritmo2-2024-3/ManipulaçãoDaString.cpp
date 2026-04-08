#include <stdio.h>

int main(){
	
	FILE *entrada = fopen("entrada.txt","r");
	FILE *saida = fopen("saida.txt","w");
	
	if(entrada == NULL || saida == NULL){
		printf("Erro ao abrir arquivos.");
		return 1;
	}
	
	/*Em C,NULL e uma constante que representa um ponteiro nulo,
	ou seja, a ausencia de um endereco de memoria valida.*/
	
	char linha[100];
	
	while(fgets(linha, sizeof(linha), entrada) != NULL){
		fputs(linha,saida);
	}
	
	fclose(entrada);
	fclose(saida);
}
