//
// Created by Robert L Resende on 11/10/24.
//

#include <cstdio>
int main(){

    int cont, num;

    cont = 0;
    printf("digite uma sequencia numero terminada em zero: ");
    scanf("%d",&num); // Primeira leitura: fora do loop

    while (num != 0){
        cont++;
        scanf("%d",&num); //segunda leitura: dentro do loop

    }
    printf("\n foram digitados %d numeros. \n");

    return 0;
}
