#include <cstdio>

#define M 5
#define N 5

void encontrar_matriz(int matriz[M][N], int num){

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(matriz[i][j] == num){
                printf("Posicao(%d, %d)\n" , i + 1 , j + 1);
            }
        }
    }
    printf("Numero nao encontrado");
}

int main(){

    int matriz[M][N],num;

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("Digite um numero: ");
    scanf("%d",&num);

    encontrar_matriz(matriz,num);
    return 0;
}