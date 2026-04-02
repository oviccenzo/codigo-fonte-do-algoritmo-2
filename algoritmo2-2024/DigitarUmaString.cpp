//18/11/2023
//strcpy e uma copia de strcpy-origem para a string-destino
//Exemplo 2:
#include <cstdio>
#include <cstring>
int main(){

    char str1[100], str2[100],str3[100];

    printf("entre com uma string: ");
    gets(str1);
    strcpy(str2,str1);
    strcpy(str3,"voce digitou uma string: ");
    printf("\n\n%s%s",str3,str2);

    return (0);
}