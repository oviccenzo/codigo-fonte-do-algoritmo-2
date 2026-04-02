#include <cstdio>
int main(){

    float nota;

    printf("Digite sua nota: ");
    scanf("%f",&nota);

    if (nota >= 10){
        printf("Conceitos A");
    } else if(nota < 9 and nota >= 8){
        printf("Conceitos B");
    } else if(nota < 7 and nota >= 6){
        printf("Conceitos C");
    } else if(nota < 5 and nota >= 4){
        printf("Conceitos D");
    } else {
        printf("Conceitos F");
    }
}