#include <stdio.h>
int main(){
	
	int matrix[6][5];
	int i, j, count;
	count = 1;
	
	for(i = 0; i < 6; i++){
		for(j = 0; j < 5; j++){
			matrix[i][j] = count;
			count++;
		}
	}
	
	
	printf("Conteudo da matriz 6x5: \n");
	for (i = 0; i < 6; i++){
		for(j = 0; j < 5; j++){
			printf("%d ", matrix[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
