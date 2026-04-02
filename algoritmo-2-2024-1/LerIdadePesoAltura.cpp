//19/11/2023
//O programa declara o retorno de structs em funcoes de campo como parametro
#include <cstdio>
typedef struct //cria uma STRUCT para armazenar os dados de uma pessoa
{
    float peso;      //Define o campo peso
    int idade;      //Define o campo idade
    float altura;  //Define o campo Altura
}Pessoa;          //Define o nome do novo tipo criado

Pessoa SetPessoa(int idade, float peso, float altura)
{
    Pessoa P;
    P.idade = idade;
    P.peso = peso;
    P.altura = altura;
    return P; // retorna a struct contendo os dados passados por parametro
}
void ImprimePessoa(Pessoa P) //declara o parameto como uma struct
{
    printf("Idade: %d Peso: %f Altura: %f\n",P.idade,P.peso,P.altura);
}

int main()
{
    Pessoa Joao;

    Joao = SetPessoa(15, 60.5, 1.75); //Atribui o retorno da funcao a uma variavel struct
    ImprimePessoa(Joao);
    return 0;
}
