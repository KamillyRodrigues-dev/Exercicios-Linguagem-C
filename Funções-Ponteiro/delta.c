/*Algoritmo que recebe tres valores, a, b e c que são coeficientes de um equação 2 grau
  e retorne o valor de delta.
  Author: Kamilly Vitoria
  Data: 01/09/2026
*/

#include <stdio.h>

//Sessão de prototipação
int calcularDelta(int, int, int);

int main(){
    int a, b, c, delta;
    a = b = c = delta = 0;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    delta = calcularDelta(a, b, c);
    printf("O valor de delta é: %d \n", delta);
}

int calcularDelta(int a, int b, int c){
    int delta = 0;
    delta = (b*b) - ((4*a)*c);
    return delta;
}