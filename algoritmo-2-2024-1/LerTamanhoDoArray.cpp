//20/11/2023
//Alocacao dinamica memoria
#include <cstdio>
#include <cstdlib>
int main(){
    int n, i; //Note que o array nao foi declarado previamente
    printf("Digite o tamanho do arrya: ");
    scanf("%d",&n);
    int *arr = (int *) malloc(n * sizeof (int));
    int *const nullptr = nullptr;
    if(arr == nullptr){
        printf("Falha na alocacao de memoria.\n");
        return 1;
    }
    printf("Digite os elementos do array: \n");
    for (i = 0; i < n; i++){
        scanf("%d", arr + i);
    }
    printf("Elementos do array: \n");
    for( i = 0; i < n; i++){
        printf("%d",*(arr + i));
    }
    free(arr);
    return 0;
}