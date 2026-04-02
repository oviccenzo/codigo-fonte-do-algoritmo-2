#include <cstdio>

void soma(int *num, int a, int b){
    (*num) = a+ b;

}

int main(){
    int num;
    int a = 5;
    int b = 10;

    soma(&num,a,b);

    printf("%d\n",num);
}