#include <stdio.h>
#define PI 3.1415

float raio, area, peri;

void f_leitura(){
	
	printf("digite o raio: ");
	scanf("%f",&raio); 
}

void f_area(){
	area = PI * raio * raio;
}

void f_peri(){
	peri = 2 * PI * raio;
}

void f_imprimi(){
	
	f_leitura();
	f_area();
	f_peri;
	
	printf("a area do raio e: %.2\n",f_area);
	printf("a area do perimetro e: %.2f\n",f_peri);
}

int main(){
	
	
	
	f_imprimi();
	return 0;
}

