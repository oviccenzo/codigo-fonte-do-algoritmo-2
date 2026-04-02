//
// Created by Robert L Resende on 23/11/24.
//
#include "cstdio"
#include "cstring"

int main(){

    char sNome[80];
    int iTamanho;

    while(1)
    {
        printf("Entre com nomes(fim p/terminar): \n");
        gets(sNome);

        if(strcmp(sNome,"fim") == 0)
        {
            break;
        }
        iTamanho = strlen(sNome);
        printf("Nome com %d caracteres\n", iTamanho);
    }
    return 0;
}