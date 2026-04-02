#include "cstdio"

int SequenciaA(){
    int i,a = 20;
    for(i = 0; i < 10; i++){
        printf("%d ", a);
        a -= 5;
    }
    printf("\n");
    return 0;
}

int SequenciaB(){
    int i , b = 4;
    for(i = 0; i < 10; i++){
        printf("%d ", b);
        b *= 4;
    }
    printf("\n");
    return 0;
}
int SequenciaC(){
    float c = 16;
    int i;
    for(i = 0; i < 10; i++){
        printf("%.4f ",c);
        c /= 4;
    }
    printf("\n");
    return 0;
}

int main(){

    printf("sequencia a: \n");
    SequenciaA();

    printf("sequencia b: \n");
    SequenciaB();

    printf("sequencia c: \n");
    SequenciaC();

}