#include <cstdio>

int main()
{
    int i = 0;

    float media = 0, nota[3], soma = 0;

    for (i = 0 ; i<3 ; i++)
         scanf("%f", &nota[i]);

    for (i = 0;i<3; i++)
         soma += nota[i];

    media = soma / 3;

    printf("A media do aluno é: %.2f\n",media);

    return 0;

}