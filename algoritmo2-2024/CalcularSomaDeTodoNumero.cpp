//
// Created by Robert L Resende on 20/11/24.
//
#include <cstdio>
int main(){

    double S;
    int denominador, numerador;

    for(denominador = 20; denominador >= 1;denominador--){
        numerador = 220 - (20 - denominador);

        S += (double) numerador/denominador;
    }

    printf("A soma é: %.6f\n",S);
}

