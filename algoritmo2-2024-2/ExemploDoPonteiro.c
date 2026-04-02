#include <stdio.h>

void troca(int *a, int *b)
{
 	int temp;
	temp = *a;
	*a = *b;
    *b = temp;
}
void main(void){ //Programa Ordena Vetor Corrigido

  int A[10];
  int i,j,n = 10;

  for(i=0;i<n;i++)
    scanf("%d", &A[i]);
    for(j=0;j<n;j++)
	  for(i=0;i<n-1;i++)
		if(A[i]>A[i+1])
			   troca(&A[i],&A[i+1]); // Corre??o
	for(i=0;i<n;i++)
		printf("%d\n", A[i]);
}
