//
// Created by Robert L Resende on 04/07/25.
//
#include "cstdio"
#include "cstdlib"
#include "unistd.h"
#include "sys/types.h"
#include "sys/wait.h"

int main(){
    pid_t pid;

    //processo pai
    printf("[PAI]Meu pid é %d\n",getpid());

    pid = fork();

    if(pid< 0){
        //criação do erro do processo filho
        fprintf(stderr,"Erro ao criar processo filho\n");
        return 1;
    } else if(pid == 0){
        //processo filho
        printf("[FILHO]Meu pid é %d, o pid do meu pai é %d\n",getpid(),getppid());
        //criando uma nova sessão para tomar o filho independente
        if(setsid() < 0){
            fprintf(stderr,"[FILHO]Erro ao criar nova sessão\n");
            return 1;
        }
        //gerando um tempo aleatorio entre 1 e 4 segundos
        srand(getpid());
        int tempo = (rand() % 4) + 1;

        printf("[FILHO] Temporizador de %d segundos iniciados...\n",tempo);
        sleep(tempo);
        printf("[FILHO] Finalizando execução apos %d segundos.\n",tempo);

        return 0;
    } else{
        //processo pai
        printf("[PAI] Meu filho tem pid %d, mas eu não vou esperar ele finzalizar!\n",pid);
        printf("[PAI] Continuando minha execução normalmente...\n");
    }
    return 0;
}