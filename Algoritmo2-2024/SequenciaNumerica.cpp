#include <cstdio>

int SequenciaNumerica(){
    int i;
    float w = 16;
    for(i = 0; i < 10; i++){
        printf("%.6f ",w);
        w /= 4;
    }
    printf("\n");
    return 0;
}

int main(){

    printf("sequencia numerica e: ");
    SequenciaNumerica();
}

// xn​=-2/1​(-2)n+3/1​(-3)n