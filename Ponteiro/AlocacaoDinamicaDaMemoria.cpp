#include <cstdio>
#include <cstdlib>

int main(){

    int *p;
    int aux,quantidade;
    printf("Informe a quantidade de valores que deseja alocar: ");
    scanf("%d",&quantidade);

    if((p = (int *) malloc (quantidade * sizeof(int))) == NULL){
        printf("** Memoria insuficiente **");
        getchar();
        exit(1);
    }

    for(aux = 0; aux < quantidade; aux++){
        printf("Informe o valor %d: ", aux + 1);
        scanf("%d",p + aux);
    }

    printf("Valor(es) alocado(s): ");
    for(aux = 0; aux < quantidade; aux++){
        printf("%d\t", *(p+aux));
    }

    return 0;
}