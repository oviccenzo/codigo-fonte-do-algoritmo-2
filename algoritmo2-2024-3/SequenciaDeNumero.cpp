#include <stdio.h>
int main(){
	int soma = 0, quantidade  = 0,n;
	
	while(1){
		printf("digite um numero: \n");
		scanf("%d",&n);
		
		if(n == 0){
			break;
		}
		
		soma += n;
		quantidade++;
		
		if(quantidade > 0){
			float media = (float) soma/quantidade;
			printf("o numero digitado e: %.2f\n",media);
		} else{
			printf("nenhum numero foi alterado");
		}
	}
}
