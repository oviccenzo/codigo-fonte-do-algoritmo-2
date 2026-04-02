//
// Created by Robert L Resende on 11/10/24.
//
#include "cstdio"

void sequenciaA(){
    int a = 20;
    for(int i = 0; i < 10 ; i++){
        printf("%d ",a);
        a -= 5;
    }
    printf("\n");
}
void sequenciaB(){
    int b = 1;
    for(int i = 0; i < 10; i++){
        printf("%d ",b);
        b *= 4;
    }
    printf("\n");
}

void sequenciaD(){
    double d = 16;
    for(int i = 0; i < 10; i++){
        printf("%.4f ",d);
        d /= 2;
    }
    printf("\n");
}


int main(){

    printf("sequencia (a): \n");
    sequenciaA();

    printf("sequencia (b): \n");
    sequenciaB();

    printf("sequencia (d): \n");
    sequenciaD();

}