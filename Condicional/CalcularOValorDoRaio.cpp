#include <cstdio>
#define PI 3.14
int main(){

    int raio = 9;
    while(raio > 0) {
        printf("Digite o valor do raio: \n");
        scanf("%d",&raio);

        if(raio > 0) {
            double area = PI * raio * raio;
            printf("A area do  circulo com raio é: %.2f\n",raio,area);
        } else{
            printf("Fim do programa\n");
        }
    }
}

