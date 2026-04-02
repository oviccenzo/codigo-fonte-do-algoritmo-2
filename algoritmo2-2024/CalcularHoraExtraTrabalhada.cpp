#include <cstdio>
int main(){

    int HoraExtra,Falta,Ponto;

    printf("Digite a quantidade de hora extra trabalhadas: ");
    scanf("%d",&HoraExtra);

    printf("Digite a quantidade de falta: ");
    scanf("%d",&Falta);

    Ponto = HoraExtra - (2/3 * Falta);

    if(Ponto > 40)
        printf("O bônus é R$ 5000,00");
    else if(Ponto > 30 && Ponto <= 40)
        printf("O bônus é R$ 4000,00");
    else if(Ponto > 20 && Ponto <= 30)
        printf("O bônus é R$ 3000,00");
    else if(Ponto > 10 and Ponto <= 20)
        printf("O bônus é R$ 2000,00");
    else if(Ponto <= 10)
        printf("O bônus é R$ 1000,00");


    return 0;
}