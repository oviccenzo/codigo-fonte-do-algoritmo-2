#include <cstdio>

int fibonacci(){
    int f1 = 1, f2 = 1, next = 2,i;
    printf("%d %d", f1,f2);
    for(i = 3; i <= 10; i++){
        printf("%d ",next);
        f1 = f2;
        f2 = next;
        next = f1 + f2;
    }
    printf("\n");
    return 0;
}

int main(){
    fibonacci();
}