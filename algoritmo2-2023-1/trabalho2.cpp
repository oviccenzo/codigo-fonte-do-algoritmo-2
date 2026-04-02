#include <cstdio>

float MediaFinal(float a1, float a2, float a3, float a4){
    return ((a1 + a2 + a3 + a4) / 4.0);
}

int main(){
    float bim1,bim2,bim3,bim4,faltas,media;

    printf("\nCalcular media final.");
    printf("\nInforme as seguintes notas: ");
    printf("\n1 bimestre: ");
    scanf("%d",&bim1);

    printf("\n2 bimestre: ");
    scanf("%d",&bim2);

    printf("\n3 bimestre: ");
    scanf("%d",&bim3);

    printf("\n4 bimestre: ");
    scanf("%d",&bim4);

    printf("\nInforme o numero de faltas: ");
    scanf("%d",&faltas);

    media = MediaFinal(bim1,bim2,bim3,bim4);

    if(media >= 7 && faltas >= 36){
        printf("\nAprovado");
    } else if(media >= 4 && media < 7 && faltas >= 36){
        printf("\nExame final");
    } else{
        printf("\nReprovado");
    }

    return 0;
}


//#include <cstdio>
//
//int media_final(float a1, float a2, float a3, float a4)
//{
//     (( a1 + a2 + a3 + a4 ) / 4 );
//    return 0;
//}
//int main()
//{
//    float bim1, bim2, bim3, bim4, fouls = 0, socks;
//
//    printf("\nCalculator media final.");
//    printf("\nInform as integuments notes:");
//    printf("\n1 firestore: ");
//    scanf("%d", &bim1);
//
//    printf("\n2 firestore: ");
//    scanf("%d", &bim2);
//
//    printf("\n3 firestore: ");
//    scanf("%d", &bim3);
//
//    printf("\n 4 firestore: ");
//    scanf("%d", &bim4);
//
//    printf("\nInform o number de falters: ");
//    int falters;
//    scanf("%d", &falters);
//
//    int media = media_final(bim1, bim2, bim3, bim4);
//    if (media >= 4 && media < 7 && fouls >= 36) {
//        printf("\nExamples final");
//    }
//    {
//        printf("\nPreapproval");
//    }
//
//}