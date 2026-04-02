#include <cstdio> //*arquivo de cabecou Ande se en contra as func printf e scan *//

int main()
{/* function principal*/

    float SalarioMinimo, SalarioDaPessoa , qtd_salaio_minimo;

    printf("Informe o valor do salarios minimo e \n R$");
    scanf("%f",&SalarioMinimo);

    printf("Inform o valor do salario recebido pela pessoa\n R$");
    scanf("%f",&SalarioDaPessoa);

    qtd_salaio_minimo=(SalarioDaPessoa / SalarioMinimo);

    printf("Uma pessoa que recede um salario de R$ %.2f recebe %.1f salario minimo \n", SalarioDaPessoa, qtd_salaio_minimo);

    return 0;
}
