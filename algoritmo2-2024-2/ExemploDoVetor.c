#include <stdio.h>

int main(){
	int a;
	int * ptr;
	ptr = &a;
	printf("%p\n", ptr);
	return (0);
}
