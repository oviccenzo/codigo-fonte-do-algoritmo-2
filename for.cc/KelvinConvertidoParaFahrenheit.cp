#include <stdio.h>

int main(){

    float k,f,k_e_f,f_e_k;

    printf("Digite a tmperatura kelvin para fahrenheit: ");
    scanf("%f",&k);
    k_e_f = (k - 273.15) * 9/5 + 32;
    printf("O resultado da conversão kelvin para fahrenheit é: %.2f\n",k_e_f);

    printf("Digite a temperatura fahrenheit para kelvin: ");
    scanf("%f",&f);
    f_e_k = (f - 32) * 5/9 + 273.15;
    printf("O resultado da conversão fahrenheit para kelvin é: %.2f\n",f_e_k);
}