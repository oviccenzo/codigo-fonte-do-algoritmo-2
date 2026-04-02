//
// Created by Robert L Resende on 12/12/24.
//
#include "cstdio"

int main(){

    int raio ,area;

    while(raio > 0){
        printf("Digite o valor do raio: \n");
        scanf("%d", &raio);

        area = 3.14f * raio * raio;

        printf("a area do circulo do raio e: \n", area);
    }

    return 0;
}