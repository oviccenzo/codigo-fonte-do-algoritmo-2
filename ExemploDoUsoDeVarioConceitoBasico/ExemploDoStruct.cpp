//
// Created by Robert L Resende on 30/11/24.
//
#include "cstdio"

struct adicao{
    int x,c;

}w,o;

int main() {

    struct adicao W,O;

    printf("Digite o numero um: \n");
    scanf("%d %d",&W.x, &W.c);

    printf("Digite o segundo numero: \n");
    scanf("%d %d",&O.x, &O.c);

    int adicao = (W.x +  W.c + O.x + O.c) / 2;

    printf("A soma da condenada do ponto e: %d",adicao);

}
//
// Created by Robert L Resende on 09/11/24.
//
//#include <cstdio>
//#include <cstdlib>
//int main(){
//
//    int i,t,M[3][4];
//    for(t = 0; t < 3; ++t){
//        for(i = 0; i < 4; ++i){
//            M[t][i] = (t * 8) + i + 1;
//        }
//    }
//    for(t = 0; t < 3; ++t){
//        for(i = 0; i < 4; ++i){
//            printf("M[%d][%d] = %d\n",t,i,M[t][i]);
//        }
//    }
//}
