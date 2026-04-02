//19/11/2023
//Passagem de structs por parametro
//O progrma declara uma struct por valor para declara como parametro:
#include <cstdio>
 typedef struct //Cria uma STRUCT para armazenar os dados de uma pessoa
 {
    float Peso;      //define o campo Peso
    float Idade;    //define o campo Idade
    float Altura;  //define o campo Altura
 } Pessoa;        //Define o nome do novo tipo criado

 void ImprimePessoa(Pessoa P) //declara o parametro como uma struct
 {
     printf("Idade: %f Peso: %f Altura: %f\n",P.Idade,P.Peso,P.Altura);
 }
 int main()
 {
     Pessoa Joao, P2;
     Pessoa Povo[10];

     Joao.Idade = 15;
     Joao.Peso = 60.5;
     Joao.Altura = 1.89;

     Povo[4].Idade = 23;
     Povo[4].Peso = 75.3;
     Povo[4].Altura = 1.89;

     P2 = Povo[4];
     P2.Idade++;

     //Chama a funcao que recebe a strcut como parametro
     ImprimePessoa(Joao);
     ImprimePessoa(Povo[4]);
     ImprimePessoa(P2);
     return 0;
 }