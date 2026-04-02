#include <stdio.h>

int main(){

    float k,f,k_f,f_k;

    printf("Digite a temperatura kelvin convertido para fahrenheit: ");
    scanf("%f",&k);
    k_f = ( k - 32 ) * 5/9 + 273.15;
    printf("O resultado da conversão kelvin para fahrenheit é: %.2f\n",k_f);
    
    //Separado a formula
    
    printf("Digite a temperatura fahrenheit convertido para kelvin: ");
    scanf("%f",&f);
    f_k = (f - 273.15) * 9/5 + 32;
    printf("O resultado da conversão kelvin para fahrenheit é: %.2f\n",f_k);

    return 0;
}