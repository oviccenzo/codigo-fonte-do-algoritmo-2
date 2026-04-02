#include <cstdio>

int main(){

    float nota1,nota2;


    printf("Digite a primeira nota(nota1): ");
    scanf("%f",&nota1);

    printf("Digite a segunda nota(nota2): ");
    scanf("%f",&nota2);

    float media = (nota1+nota2)/2;

    printf("A media de duas notas dos alunos eh: %.1f\n",media);

    if(media < 6){
        printf("Reprovado\n");
    } else{
        printf("Aprovado\n");
    }
}