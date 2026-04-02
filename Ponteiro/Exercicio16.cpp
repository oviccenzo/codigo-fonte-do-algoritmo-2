#include <cstdio>

int main(){

    int mat[] = {4,9,12,34};
    int j, *ptr;
    ptr = mat;
    for(j = 0; j < 4; j++)
        printf(" %d \n", (*ptr)++);
}