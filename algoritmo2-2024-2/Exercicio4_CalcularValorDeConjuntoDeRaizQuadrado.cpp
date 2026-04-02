#include <stdio.h>
#include <math.h>
int main(){
	
	float num;
	
	while(1){
		
		printf("digit um numero: ");
		scanf("%f",&num);
		
		if(num == 0){
			break;
		}
		
		printf("seu valor quadrado e: %f\n",pow(num,2));
		printf("seu valor cubo e: %f\n",pow(num,3));
		printf("sua raiz quadrado e: %f\n",pow(num , 0.5));
	}
}
