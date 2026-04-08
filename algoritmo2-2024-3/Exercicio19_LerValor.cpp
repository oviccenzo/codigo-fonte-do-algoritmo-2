#include <stdio.h>
int main(){
	int mat[] = {4,9,12};
	int j, *ptr;
	ptr = mat;
	for(j = 0; j <= 3; j++){
		printf("%d",(*ptr)++);
	}
	return 0;
}
