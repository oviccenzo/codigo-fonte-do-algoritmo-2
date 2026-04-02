#include <cstdio>

void esperaEnter(){

    int tecla;
    printf("Pressione Enter\n");
    do{
        tecla = getchar();
        if(tecla != 13){
            printf("Digite ENTER\n");
        }
    }while(tecla != 13)
}