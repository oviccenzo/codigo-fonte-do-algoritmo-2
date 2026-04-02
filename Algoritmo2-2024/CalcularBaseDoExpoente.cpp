#include "cstdio"

double potencia(int base, int expoente){
    double resultado = 1.0;
    for(int i = 0; i < expoente;i++){
        resultado *= base;
    }
    return resultado;
}
int main(){
    double base;
    int expoente;

    printf("Digite a base: ");
    scanf("%lf",&base);
    printf("Digite o expoente: ");
    scanf("%d",&expoente);

    if(expoente < 0){
        printf("Error: expoente deve ser maior ou igual a zero.\n");
        return 1;
    }

    double resultado = potencia(base,expoente);
    printf("%.2f elevando a %d igual a %.2f\n",base,expoente,resultado);

    return 0;
}
