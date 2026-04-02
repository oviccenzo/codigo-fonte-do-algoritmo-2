#include <stdio.h>

struct dma{
	int dia;
	int mes;
	int ano;
};


int main(){
	
	struct dma data;
	
	printf("Digite o dia: ");
	scanf("%d", &data.dia);
	
	printf("Digite o mes: ");
	scanf("%d", &data.mes);
	
	printf("Digite o ano: ");
	scanf("%d", &data.ano);
	
	printf("A data inserida e  %02d/%02d/%d\n",data.dia,data.mes,data.ano);
	
	return 0;
	
}
