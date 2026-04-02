#include <cstdio>
#include <cstring>

//Estrutura para armazenar as informacoes do cliente
struct Cliente{
    char nome[50];
    char telefone[15];
    char nomeDaEmpresa[50];
    char email[50];
    char aniversario[6];

};

//Variavel para armazenar os clientes
struct Cliente clientes[100];
int numClientes = 0;

//Funcao para inserir um novo cliente
void inserirCliente(){
    struct cliente novoClientes;
    printf("Nome: ");
    scanf("%s",novoClientes.nome);
    printf("Telefone: ");
    scanf("%s",novoClientes.telefone);
    printf("Nome da empresa: ");
    scanf("%s",novoClientes.nomeDaEmpresa);
    printf("E-mail: ");
    scanf("%s",novoClientes.email);
    printf("Data de aniversario (dia/mes, ex:1/12): ");
    scanf("%s",novoClientes.aniversario);
    clientes[numClientes] = novoClientes;
    numClientes++;
    printf("Cliente adicionado com sucesso!\n");
}

//Funcao para listar todos os clientes em ordem alfabetica
void listarCliente(){

    for(int i = 0; i < numClientes - 1; i++){
        for(int j = 0; j < numClientes - i - 1; j++){
            if(strcmp(clientes[j].nome, clientes[j+i].nome) > 0){
                struct Cliente temp = clientes[j];
                clientes[j] = clientes[j + i];
                clientes[j + i] = temp;
            }
        }
    }
    //Exibir os clientes ordenados
    printf("Listagem de clientes por nome: \n");
    for(int i = 0; i < numClientes; i++){
        printf("Nome: %s, Telefone: %s, Empresa: %s, E-mail: %s, Aniversario: %s\n",
        clientes[i].nome, clientes[i].telefone, clientes[i].nomeDaEmpresa,
        clientes[i].email, clientes[i].aniversario);
    }
}

//Funcao para salvar os clientes em um arquivo
void salvarClientes(){
    FILE *trabalhotxt;
    FILE *arquivo = fopen("clientes.txt","w");
    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    
}