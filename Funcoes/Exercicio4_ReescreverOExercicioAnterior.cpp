//
// Created by Robert L Resende on 29/09/24.
//
#include <cstdio>
#define PI 3.1459

float f_area(float raio) {
    return raio = PI * raio * raio;
}

float f_peri(float raio){
    return raio = 2 * PI * raio;
}


int main(){

    float peri,area,raio;

    printf("calcular o raio: ");
    scanf("%f",&raio);

    area = f_area(raio);
    peri = f_peri(raio);

    printf("o calculo da area do raio da circuferencia: %.2f\n",area);
    printf("o calculo do perimetro do raio da circuferencia: %.2f\n",peri);

}

// package Funcoes;

// import java.util.Scanner;

// public class Exercicio4_ReescrevendoExercicioAnterior {

//     // Função para calcular a área
//     public static float f_area(float raio) {
//         return (float) (Math.PI * raio * raio);
//     }

//     // Função para calcular o perímetro
//     public static float f_peri(float raio) {
//         return (float) (2 * Math.PI * raio);
//     }

//     public static void main(String[] args) {

//         // Inicializando variáveis e Scanner
//         Scanner sc = new Scanner(System.in);
//         float peri, area, raio;

//         // Solicitar ao usuário para inserir o raio
//         System.out.print("Digite o valor do raio: ");
//         raio = sc.nextFloat();

//         // Chamando as funções para calcular área e perímetro
//         area = f_area(raio);
//         peri = f_peri(raio);

//         // Exibindo os resultados formatados
//         System.out.printf("O cálculo da área do círculo é: %.2f\n", area);
//         System.out.printf("O cálculo do perímetro do círculo é: %.2f\n", peri);

//         // Fechando o Scanner
//         sc.close();
//     }
// }