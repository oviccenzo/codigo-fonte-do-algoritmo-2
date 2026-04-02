#include <cstdio>
int main(){

    float Valor,ValorConvertido;
    int tipo;

    printf("Digite 1-Dolar, 2-Euro, 3-Iene: ");
    scanf("%d",&tipo);

    printf("Digite o valor a ser convertido: ");
    scanf("%f",&Valor);

    if(tipo == 1){
        ValorConvertido = Valor * 2.35;
    } else if(tipo == 2){
        ValorConvertido = Valor * 2.98;
    } else if(tipo == 3){
        ValorConvertido = Valor * 0.02;
    }

    printf("Valor fornecido é: %.2f",Valor);
    printf("\n");
    printf("Valor convertido é: %.2f",ValorConvertido);

    return 0;
}
