#include <cstdio>
int main(){

    int produto = 30;
    int valor;

    while(produto <= 30){
        printf("Quantidade de diferente de 0: \n");
        scanf("%d",&produto);

        printf("Digite um valor: \n");
        scanf("%d", &valor);

        valor =  valor * produto;

        printf("O valor da compra é valor: %d\n",valor);
    }
    return 0;
}