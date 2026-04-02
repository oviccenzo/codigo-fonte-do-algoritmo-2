#include <stdio.h>

int somarMatriz(int *matriz, int linhas, int colunas){
	int soma = 0,i,j;
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			soma += *((matriz + i * colunas) + j);
		}
	}
	return soma;
}

int main(){
	
	int matriz[3][3] = {
	{1,2,3},
	{4,5,6},
	{7,8,9}};
	
	int resultado = somarMatriz((int *) matriz,3,3);
	
	printf("A soma dos elementps da matriz e: %d\n", resultado);
	
	
}
