//
// Created by Robert L Resende on 11/10/24.
//

#include "cstdio"
int main(){

    int totalDeAluno,nota;
    float somaDaMedia = 0.0;

    //calcular quantidade de aluno
    printf("digite o numero de aluno: ");
    scanf("%d",&totalDeAluno);

    //leitura da nota do aluno
    for(int i = 1; i <= totalDeAluno; i++){
        printf("digite a nota %d: ",i);
        scanf("%d",&nota);
        //somaDaNota = somaDaNota + nota;
        somaDaMedia += nota;
    }

    //soma da media da nota do aluno
    somaDaMedia = somaDaMedia / totalDeAluno;

    printf("a media da nota do aluno e : %.2f",somaDaMedia);

    return 0;
}