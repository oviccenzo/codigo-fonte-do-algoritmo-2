#include <cstdio>
#include <cmath>

int main(){
    float imc,peso,altura;

    printf("ler altura de uma pessoa: ");
    scanf("%f",&altura);

    printf("ler o peso de uma pessoa: ");
    scanf("%f",&peso);

    imc = peso / (altura * altura);

    if(imc < 18.5){
        printf("peso abaixo\n");
    } else if(imc >= 18.5 && imc < 24.9){
        printf("peso normal\n");
    } else if(imc >= 25 && imc < 29.9){
        printf("excesso de peso\n");
    } else if(imc >= 30 && imc < 34.9){
        printf("obesidade grau 1\n");
    } else if(imc >= 35 && imc < 39.9){
        printf("obesidade grau 2\n");
    } else if(imc >= 40){
        printf("obesidade grau 3\n");
    }
    return 0;
}

