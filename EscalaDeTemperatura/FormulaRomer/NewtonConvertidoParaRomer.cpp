#include <cstdio>
int main(){

    float newton,romer;

    printf("Digite a temperatura newton convertido para romer: ");
    scanf("%f",&romer);

    newton = (romer - 7.5) * 22/35;

    printf("O resultado da conversão de romer é: %.2f" , newton);

    return 0;
}