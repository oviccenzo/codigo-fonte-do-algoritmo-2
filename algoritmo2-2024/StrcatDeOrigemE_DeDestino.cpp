//18/11/2023
//Exemplo 3: A strcat euma string de origem ate o destino da string
//strcat
#include <cstdio>
#include <cstring>

int main(){

    char str1[50],str2[50];
    gets(str1);
    strcpy(str2,"voce digitou a string ");
    strcat(str2,str1);
    printf("\n\n%s",str2);

    return (0);
}