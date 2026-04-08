#include <stdio.h>
int main(){
	
	int x,y,z;
	
	x = y = 10;
	printf("O valor de x é: %d\n",x);
	printf("O valor de y é: %d\n\n",y);
	
	
	z = ++x;
	printf("O valor de x é: %d\n",x);
	printf("O valor de y é: %d\n",y);
	printf("O valor de z é: %d\n\n",z);
	
	x = -x;
	printf("O valor de x é: %d\n",x);
	printf("O valor de y é: %d\n",y);
	printf("O valor de z é: %d\n\n",z);
	
	y *= x + 1;
	printf("O valor de x é: %d\n",x);
	printf("O valor de y é: %d\n",y);
	printf("O valor de z é: %d\n\n",z);
	
	y++;
	printf("O valor de x é: %d\n",x);
	printf("O valor de y é: %d\n",y);
	printf("O valor de z é: %d\n\n",z);
	
	x = x + y - (z--);
	printf("O valor de x é: %d\n",x);
	printf("O valor de x é: %d\n",y);
	printf("O valor de x é: %d\n\n",z);
}
