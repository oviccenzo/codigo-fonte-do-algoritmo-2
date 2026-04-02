#include <cstdio>
int main(){

    int distancia;

    printf("Informe ManipulacaoDeStrings distancia por favor: ");
    scanf("%d",&distancia);

    double valor = 4;

    if(0 <= distancia and distancia <= 3){
        valor = valor + (distancia * 0.5);
    } else if(3 < distancia and distancia <= 6){
        valor = valor + (distancia * 0.75);
    } else if(distancia > 6){
        valor = valor + (distancia * 1.00);
    }

    printf("A distancia é: %d\n",distancia);

    printf("O valor é: %.2f",valor);

    return 0;
}