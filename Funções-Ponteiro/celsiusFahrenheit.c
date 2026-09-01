/*Algoritmo que recebe uma temperatura em grau celsius e retorna o valor em Fahrenheit. 
  Author: Kamilly Vitoria
  Data: 01/09/2026
*/

#include <stdio.h>

//Sessão de prototipação
float converterTemperatura(float);

int main(){
    float temp = 0.0;
    float fah = 0.0;
    printf("Digite uma temperatura em graus celsius: ");
    scanf("%f", &temp);
    fah = converterTemperatura(temp);
    printf("%.2f° celsius em fahrenheit é: %.2f \n", temp, fah);
}

float converterTemperatura(float cel){
    float fah = 0.0;
    fah = (cel * 1.8) + 32;
    return fah;
}

