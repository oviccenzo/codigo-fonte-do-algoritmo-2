//
// Created by Robert L Resende on 16/10/24.
//
#include <cstdio>
int main(){

    int num;
    int contadorDePar = 0,contadorDeImpar = 0;
    int somaDePar = 0, somaDeImpar = 0;
    float mediaDePar, mediaDeImpar;

    printf("digite um numero positivo ou 0 para encerrar: \n");

    while(1){

        scanf("%d",&num);

        if(num == 0){
            break;
        }

        if(num < 0){
            printf("por gentileza, digite numero positivo\n");
        }

        if(num % 2 == 0){
            contadorDePar++;
            contadorDePar += num;
        }

        if (contadorDePar > 0){
            mediaDePar = somaDePar / contadorDePar;
        } else {
            mediaDePar = 0;
        }

        if(contadorDeImpar > 0){
            mediaDeImpar = somaDeImpar / contadorDeImpar;
        } else{
            mediaDeImpar = 0;
        }

        printf("numero de pare e: %d\n",contadorDePar);
        printf("numero de impar:  %d\n",contadorDeImpar);
        printf("media de par e:  %.2f\n",mediaDePar);
        printf("media de impar %.2f\n",mediaDeImpar);
    }
}
