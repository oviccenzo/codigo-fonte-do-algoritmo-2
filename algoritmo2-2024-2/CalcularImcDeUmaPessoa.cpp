#include <stdio.h>
int main(){
	
	float altura,peso;20/09/24 15:16
	
	printf("Calcular o peso de uma pessoa: ");
	scanf("%f",&peso);
	
	printf("Calcular a altura de uma pessoa: ");
	scanf("%f",&altura);
	
	float imc = peso/(altura * altura);
	
	if(imc < 18.5){
		printf("abaixo do peso");
	} else if(imc >= 18.5 && imc <= 24.9){
		printf("peso normal");
	} else if(imc >= 25 && imc <= 29.9){
		printf("excesso do peso");
	} else if(imc >= 30 && imc <= 34.9){
		printf("obesidade grau 1");
	} else if(imc >= 35 && imc <= 39.9){
		printf("obesidade grau 2(severa)");
	} else if(imc >= 40){
		printf("obesidade grau 3(mórbida)");
	}
	
	return 0;
}
