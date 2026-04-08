#include <stdio.h>

void sequenciaA(){
		int a = 20,i;
		for(i = 0; i < 10;i++){
			printf("%d ",a);
			a -= 5;
	}
	printf("\n");
}
		

void sequenciaB(){
		int b = 1,i;
		for(i = 0; i < 10; i++){
			printf("%d ",b);
			b *= 4;
	}
	printf("\n");
}


void sequenciaC(){
	
	int n1 = 1, n2 = 1,n3,n,i;
	printf("%d %d",n1,n2);
	
	for(i = 0; i < 10; i++){
		n3 = n1 + n2;
		printf("%d ",n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
}

void sequenciaD(){
	
	double d = 16,i;
	for(i = 0; i < 10;i++){
		printf("%.4f ",d);
		d /= 2;
	}
	printf("\n");
}



int main(){
	
	printf("sequencia (a): \n");
	sequenciaA();
	
	printf("sequencia (b): \n");
	sequenciaB();
		
	printf("sequencia (c): \n");
	sequenciaC();
	
	printf("sequencia (d): \n");
	sequenciaD();
	
	return 0;
}
