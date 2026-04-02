#include <cstdio>

int main(){

    int ptr[] = {4,9,12};
    int j, *mat;
    mat = ptr;
    for(j = 0; j < 3; j++){
        printf(" %d ", *mat++);
    }
}