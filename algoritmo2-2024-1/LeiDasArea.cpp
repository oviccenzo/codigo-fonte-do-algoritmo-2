#include <cstdio>
int main(){

    float a,B,H,C,s;

    printf("Digite a areas(A): ");
    scanf("%f",&a);

    printf("Digite a base(B): ");
    scanf("%f",&B);

    printf("Digite a altura (H): ");
    scanf("%f",&H);

    printf("Digite o lado: ");
    scanf("%f",&C);

    a = (B*H)/2;

    s = (C*H)/2;

    printf("O resultado é: %f\n",a);
    printf("O resultado é: %f",s);

}