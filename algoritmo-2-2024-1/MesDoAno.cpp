#include <cstdio>


int main(){

    int numero;

    printf("Digite o mes do ano: ");
    scanf("%d",&numero);

    if(numero == 1){
        printf("O mês de Janeiro\n");
    } else if(numero == 2){
        printf("O mês de Fevereiro\n");
    } else if(numero == 3){
        printf("O mês de Março\n");
    } else if(numero == 4){
        printf("O mês de Abril\n");
    } else if(numero == 5){
        printf("O mês de Maio\n");
    } else if(numero == 6){
        printf("O mês de Junho\n");
    } else if(numero == 7){
        printf("O mês de Julho\n");
    } else if(numero == 8){
        printf("O mês de Agosto\n");
    } else if(numero == 9){
        printf("O mês de Setembro\n");
    } else if(numero == 10){
        printf("O mês de Outubro\n");
    } else if(numero == 11){
        printf("O mês de Novembro\n");
    } else if(numero == 12){
        printf("O mês de Dezembro\n");
    } else if (numero < 1 && numero > 12){
        printf("Se o numero é inválido");
    }
}