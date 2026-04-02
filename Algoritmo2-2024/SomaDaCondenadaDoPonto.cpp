#include "cstdio"

typedef struct soma{

    int x,y;

} M,P;

int main(){

  struct soma M,P;
  printf("digite o ponto M: \n");
  scanf("%d %d",&M.x,&M.y);
  printf("M = (%d , %d)\n ",M.x,M.y);

  printf("digite o ponto P: \n");
  scanf("%d %d",&P.x,&P.y);
  printf("P = (%d , %d)\n",P.x,P.y);

  //
  float soma = (M.x * M.y + P.x * P.y) / 4;
  printf("A soma da condenada do ponto e: %.2f\n",soma);

  return 0;
}
// #include <stdio.h>

// // Definindo a struct para armazenar os números
// struct numeros {
//     float num1;
//     float num2;
//     float num3;
//     float num4;
// };

// int main() {
//     struct numeros n;  // Declarando a variável do tipo struct numeros
//     float soma, media;

//     // Solicita os números ao usuário
//     printf("Digite o primeiro número: ");
//     scanf("%f", &n.num1);

//     printf("Digite o segundo número: ");
//     scanf("%f", &n.num2);

//     printf("Digite o terceiro número: ");
//     scanf("%f", &n.num3);

//     printf("Digite o quarto número: ");
//     scanf("%f", &n.num4);

//     // Calcula a soma dos números
//     soma = n.num1 + n.num2 + n.num3 + n.num4;

//     // Calcula a média aritmética
//     media = soma / 4;

//     // Exibe a média
//     printf("A média aritmética é: %.2f\n", media);

//     return 0;
// }
