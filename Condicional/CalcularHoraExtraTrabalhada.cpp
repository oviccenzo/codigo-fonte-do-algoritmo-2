#include <cstdio>
int main(){

    int horasTrabalhadas;

    printf("calcular quantas horas extra trabalhada: ");
    scanf("%d",&horasTrabalhadas);

    int salario = 0;

    if(horasTrabalhadas <= 40){

        salario = horasTrabalhadas * 2;
    } else{
        salario = 320 + (horasTrabalhadas * 12);
    }

    printf("numero de horas extra trabalhada: %d\n",horasTrabalhadas);

    printf("salario semanal: %d\n",salario);

    return 0;
}