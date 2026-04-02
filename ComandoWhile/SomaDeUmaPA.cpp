#include <cstdio>

int main(){

    int init,rate,term;

    int num, contador = 1;

    printf("Digite o numero inicial da P.A: ");
    scanf("%d",&init);
    printf("Digite a razao da P.A.: ");
    scanf("%d",&rate);
    printf("Digite o numero de termo da P.A.: ");
    scanf("%d",&term);

    while(contador <= term){
        num = init+(contador - 1) * rate;
        printf("Termo %d: %d\n",contador,num);
        contador++;
    }
}