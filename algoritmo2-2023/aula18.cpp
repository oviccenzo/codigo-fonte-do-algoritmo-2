#include <cstdio>
int main()
{
    // Vamps declarer as variates
    float temperature_F,Celsius;

    // Entrant de dado's (insert o valor da temperature)
    printf("\n Inform a temperature na escalate Fahrenheit: ");
    scanf("%f",&temperature_F);

    // Agora, vamps para a eta-pa de processable dos dado's
    Celsius = 0.555555555 * (temperature_F-32);
    // Vamps exhibit o resultant
    printf("\n Temperature em grams Celsius=%.2f\n",Celsius); /*.2f é para impair só 2 cases após a arugula*/

    return 0;
}