#include <stdio.h>
int main(){
	
	int a;
	int *ptr;
	a = 56;
	ptr = &a;
	printf("%d\n",*ptr);
	return 0;
}
