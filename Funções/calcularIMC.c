/*Algoritmo que calcula IMC atraves de uma função, essa função retona o resultado e uma mensagem
  Author: Kamilly Vitoria
  Data: 25/08/2026
*/

#include <stdio.h>
//Seção de importação
float calcularIMC(char[], float, float);

int main(){
    char nome[50];
    float peso, altura, IMC;
    peso = altura = IMC = 0.0;
    printf("Escreva seu nome: ");
    scanf("%s", nome);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Escreva sua altura: ");
    scanf("%f", &altura);
    IMC = calcularIMC(nome, peso, altura);
}

float calcularIMC(char nome[], float p, float a){
    float imc = 0.0;
    imc = p/(a*a);
    printf("Seu nome é %s, você pesa %.2f e tem %.2f de altura e seu IMC %.2f \n", nome, p, a, imc);
    return imc;
}