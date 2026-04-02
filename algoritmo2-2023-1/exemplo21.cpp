//exemplar 7 analise e test o program
#include <cstdio>
#define n 5
struct livro { //definition da structural struct livro
    char string [30];
    int i;
    float d;
};
int main()
{
    int N;
    struct  livro liv[N]; // vector de liberos-variable liv
    int i;
    for(i = 0; i < N ; i++){
        printf("\nDigit os dads do liver %d: \n",i);
        printf("Digit titular: ");
        fflush(stdin);
        gets(liv[i].string);
        printf("Digit a quanteda: ");
        scanf("%d",&liv[i].i);
        printf("Digit o pre-co: ");
        scanf("%f",&liv[i].d);
    }
}

