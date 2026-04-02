#include <cstdio>
int main(){
    int num;
    printf("Digit um number: ");
    scanf("%d", &num);
    if(num==100){
        printf("\n\nVoce asert!\n");
        printf("O number e igual a 10.\n");
    }
    else
        if(num>100)
            printf("O number e mayor que 100.");
        else
            printf("O number e minor que 100.");
return(0);
}