//
// Created by Robert L Resende on 04/07/25.
//
#include "cstdio"
#include "unistd.h"
#include "sys/wait.h"

int main(){
    pid_t pid;

    //o pid do pai
    printf("[PAI] Meu PID é %d\n",getpid());

    for (int i = 0; i < 5; ++i) {
        pid = fork();

        if(pid < 0){
            //o erro da criação do processo filho
            fprintf(stderr , "Erro ao criar processo filho %d\n", i + 1);
            return 1;
        } else if(pid == 0){
            //processo filho
            printf("[FILHO %d]Meu pid é %d, o pid do meu pai é %d\n", i + 1, getpid(),getppid());
            sleep(2); //Simula alguma execução do filho
            return 0;
        }
    }

    //processo pai espera todos os filhos terminarem
    for (int i = 0; i < 5; ++i) {
        wait(NULL);
    }
    printf("[PAI] todos os filhos concluidos!\n");
}