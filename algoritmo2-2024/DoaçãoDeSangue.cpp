#include <cstdio>
int main(){

    int idade;
    float peso;

    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    printf("Digite o seu peso: ");
    scanf("%f",&peso);

    if(idade >= 30 && idade <= 65 && peso>=80){
        printf("Voce pode doar sangue\n");
    } else{
        printf("Voce não pode doar sangue\n");
    }

    return 0;
}