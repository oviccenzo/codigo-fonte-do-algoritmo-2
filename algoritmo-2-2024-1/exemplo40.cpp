//26/11/2023
#include <cstdio>
#include <ctime> //necessario para usar localtime() struct tm
int main()
{
    //ponteiro para struct que armazena data e hora
    struct tm *data_hora_atual;

    //variavle do tipo time_t para armazenar o tempo em segundos
    time_t segundos;

    //obtendo o tempo em segundos
    time(&segundos);

    //para converter de segundos para o tempo local;
    //utilizamos a funcao localtime
    data_hora_atual = localtime(&segundos);

    //para acessar os membros de uma struct usando o ponteiro
    //utilizamos o operador -> no nosso caso temos:
    //data_hora_atual->membro_da_struct

    //Acessando dados convertidos para a struct data_hora_atual
    printf("\nDia..........: %d\n",data_hora_atual->tm_mday);

    //para retornar o mes corretamente devemos adicionar +1
    //como vemos abaixo
    printf("\nMes..........: %d\n\n",data_hora_atual->tm_mon+1);

    //para retornar o ano corretamente devemos adicionar 1900
    //como vemos abaixo
    printf("\nAno..........: %d\n\n",data_hora_atual->tm_year+1900);

    printf("\nDia do ano...: %d\n\n", data_hora_atual->tm_yday);
    printf("\nDia da semana: %d\n\n",data_hora_atual->tm_wday);

    /* obtendo os valores da struct data_hora_atual
     * e formatando a saida de dados no formato
     * hora: minuto: segundo

     *Para nao ficar um printf muito longo em uma unica linha
     * de comando, quebrei a impressao em 3 partes mostrando
     * uma informacao em cada linha
     * */
    printf("\nHora........: %d:",data_hora_atual->tm_hour);
    printf("%d: ",data_hora_atual->tm_min); //minuto
    printf("%d\n",data_hora_atual->tm_sec); //segundo

    /*Obtendo os valores da struct data_hora_atual
     * e formatando a saida de dados no formato de/mes/ano
     *
     * Para nao ficar um print muito longo em uma unica
     * linha de comando, quebrei a impressao em 3 parte
     * sendo uma informacoa em cada linha
     * */
    //dia do mes
    printf("\nData........: %d\n", data_hora_atual->tm_mday);
    printf("%d/",data_hora_atual->tm_mon+1); //mes
    printf("%d\n\n",data_hora_atual->tm_year+1900); //ano

    return 0;
}