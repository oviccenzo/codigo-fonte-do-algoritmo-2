#include <stdio.h>

int main() {

	int mat[]= {4,9,13};
	int j;
	for(j = 0; j < 3; j++){
		printf("%d", mat + j);
	}

	return 0;
}

