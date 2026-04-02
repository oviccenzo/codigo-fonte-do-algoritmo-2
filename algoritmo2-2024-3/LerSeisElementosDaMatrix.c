#include <stdio.h>
int main(){
	
	int i,j,M[2][3];
	
	printf("Digite 6 elementos: \n");
	for(i = 0; i < 2; i++)
	   for(j = 0; j < 3; j++) 
		scanf("%d",&M[i][j]);
	
	printf("\nElementos da matriz: \n");
	for(i = 0; i < 2; i++){
	  for(j = 0; j < 3; j++)
	    printf("%4d",M[i][j]);
    printf("\n");
	}
	system("PAUSE");
	return 0;	  
}
