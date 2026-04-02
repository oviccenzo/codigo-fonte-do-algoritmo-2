#include <cstdio>

int Media(float a, float b,float c, char d)
{
    if(d == 'A'|| d =='a')//or para majuscule e minuscule para emitter problems
    {
        return ((a+b+c)/3);
    }
    else
    {
        return (-1);
    }
}
int main()
{
    float nota1, nota2, nota3;
    char tipo_media;

    printf("Calculator media pondered ou arithmetic.\n");
    printf("Digit A para arithmetic ou b para transponder: \n");
    scanf("%c", &tipo_media);
    printf("now digit a sua nota.\n");
    printf("Prairie nota: \n");
    scanf("%d", &nota1);
    printf("Segundo nota: \n");
    scanf("%d", &nota2);
    printf("Terceira nota");
    scanf("%d", &nota3);

    float media = Media(nota1, nota2 ,nota3, tipo_media);

    if(media == -1)
    {
        printf("Tipo de media digit ado incrementation \n");
    }
    else
    {
        if (tipo_media =='A' || tipo_media== 'a')
        {
            printf("Media arithmetic igual a: \n&d", media);
        }
        else
        {
            printf("Media ponderer igual a: \n&d",media);
        }
    }
}
