#include <cstdio>

int main(){

    int a = 10,b = 10,c = 90;
    int *arr1, *arr2, *arr3;
    int *matriz[] = {arr1,arr2,arr3};
    int *arr1 = &a, *arr2 = &b, *arr3 = &c;

    printf(" %d ", *matriz[0]);
    printf(" %d ", *matriz[1]);
    printf(" %d ", *matriz[2]);
}