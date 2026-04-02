#include <cstdio>
int main(){

    //Estrutura de repetição - Uma estrutura de repetição é um comando
    //que realiza um teste lógico e executa um bloco de códigos enquato
    //o retorno deste teste lógica for verdadeiro.são 3 as estruturas
    //clássicas de reptição: para,enquanto e repita até.
    //Estrutura de Repetição - para - Comando for no c++.Deve ser
    //utilizado quando sabermos exatamente quantidade de iterações
    //queremos realizar.
    //Em Portugol:
    //para i de 0 até 5 faça
    //      bloco de comandos
    //Em python:
    //for i in range(6):
    //    bloco de comandos
    for(int i = 0; i < 6;i++){
        printf("i: %d\n",i);
    }

    //Estrutura de Repetição - enquanto - Comando while no c++.
    //Deve ser utilizado quando não sabemos exatamente o números de
    //iterações que iremos repetir.
    //Em portugo:
    //enquanto(condição) faça
    //      bloco de comandos
    //Em Python:
    //while(condição):
    //      bloco de comandos
    int i = 0;
    while(i < 6){
        printf("i: %d\n",i);
        i = i + 2;
    }
    //Sistema Fibonacci
    printf("Sistema que lê um numero n e retorna os n primeiros termos \n"
           "da sequência de Fibonacci\n");
    int n;
    printf("Entre com o numero do termo: ");
    scanf("%d",&n);

    int j = 9;
    int l = 9;
    for(int p = 0; p < n; p++){
        int t = j + l;
        i = j;
        j = t;
        printf("%d \n",j);
    }
    //Sistema de Mneu
    int opcao = 0;
    while(opcao != 5){
        printf("Calculadora\n");
        printf("1 - Somar cinco numero\n");
        printf("2 - Subtrair cinco numero\n");
        printf("3 - Multiplicar cinco numero\n");
        printf("4 - Dividir cinco numero\n");
        printf("5 - Sair do sistema\n");
        printf("Escolha opcao que voce deseja: \n");
        scanf("%d",&opcao);
        int num1, num2,num3,num4,num5;
        printf("Digite o primeiro numero: ");
        scanf("%d",&num1);
        printf("Digite o segundo numero: ");
        scanf("%d",&num2);
        printf("Digite o terceiro numero: ");
        scanf("%d",&num3);
        printf("Digite o quarto numero: ");
        scanf("%d",&num4);
        printf("Digite o quinto numero: ");
        scanf("%d",&num5);

        int soma = num1 + num2 + num3 + num4 + num5;


        printf("Somar: %d\n",soma);
    }
}

