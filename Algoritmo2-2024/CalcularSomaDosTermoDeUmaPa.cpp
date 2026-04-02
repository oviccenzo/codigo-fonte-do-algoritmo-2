#include <cstdio>
int main(){

    int sn,an,a1,n,r;

    printf("Digite o primeiro termo da p.a: ");
    scanf("%d",&a1);

    printf("Digite a posição do termo da pa: ");
    scanf("%d",&n);

    printf("Digite a razão do termo da pa: ");
    scanf("%d",&r);

    an = a1 + (n - 1) * r;
    sn = (a1 + an) * n/2;

    printf("A soma do termo da pa é: %d",an);
    printf("\n");
    printf("A soma do termo da pa é: %d",sn);

    return 0;
}