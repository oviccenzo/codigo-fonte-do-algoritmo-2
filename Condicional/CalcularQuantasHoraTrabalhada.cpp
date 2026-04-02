#include <cstdio>
int main(){

    int horaExtras, falta;

    printf("digite quantas hora extra trabalhada: ");
    scanf("%d",&horaExtras);

    printf("quantas falta: ");
    scanf("%d",&falta);

    double ponto = horaExtras - 2/3 * falta;

    if(ponto > 40){
        printf("bonus é R$5000,00");
    } else if(ponto > 30 and ponto >= 40){
        printf("bonus é R$4000,00");
    } else if(ponto > 20 and ponto >= 30){
        printf("bonus é R$3000,00");
    } else if(ponto > 10 and ponto <= 20){
        printf("bonus é R$2000,00");
    } else if(ponto <= 10){
        printf("bonus é R$ 1000,00");
    }
}