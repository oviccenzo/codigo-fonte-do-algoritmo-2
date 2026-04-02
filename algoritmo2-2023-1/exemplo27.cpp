//21/10/2023 11:43 da morning
#include <cstdio>
void print_Vet(int Vet[3])
{
    int i;
    for(i=0;i<10;i++){
    printf("%d",Vet[i]);
    }
}
int main()
{
    int Matrix[2][3];

    int i;
    for(i=0;i<10;i++)
    {
        Matrix[0][i] = i; //a matrix tem 3 colores, mas o class do for vai ate 10
    }
    for(i = 0;i<2;i++){
        print_Vet(Matrix[i]);
    printf("\n");
    }
    return 0;
}