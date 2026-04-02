//
// Created by Robert L Resende on 04/07/25.
//
#include "cstdio"
#include "sys/wait.h"
#include "unistd.h"

int main(){
    pid_t pid;

    printf("[PAI]Meu pid é %d\n",getpid());

    pid = fork();

    if(pid < 0){
        fprintf(stderr, "Erro na chamada do fork.\n");
    } else if(pid == 0){

        //Processo filho
        printf("[FILHO]Meu pid %d, o pid do meu pai é %d\n",getpid(),getppid());
        printf("[FILHO]Chamando comando execlp...\n");
        execlp("/bin/ls", "-la",NULL);
        //se execlp falhar , este trecho sera executado
        printf("[FILHO] execlp, finalizado!\n");

    } else {
        //processo pai
        printf("[PAI]Meu filho tem  pid  %d\n");
        wait(NULL); //aguarda o filho terminar
        printf("[PAI] filho concluido!\n");
    }
}