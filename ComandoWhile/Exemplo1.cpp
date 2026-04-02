#include <cstdio>

int main(){
    float val,soma;
    int contagem;
    soma = 0;
    contagem = 1;
    while(contagem <= 10){
        printf("\nDigite o %do. numero: ",contagem);
        scanf("%f",&val);
        soma = soma + val;
        contagem = contagem + 1;

        printf("\nO resultado da soma eh: %.1f\n",soma);

        
    }

    return 0;
}