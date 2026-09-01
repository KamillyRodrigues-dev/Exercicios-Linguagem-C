/*Algoritmo que le um numero inteiro e em uma função emite se é positivo, negativo 
  ou nulo, quando for igual a 0.
  Author: Kamilly Vitoria
  Data: 01/09/2026
*/
#include <stdio.h>

//Sessão de importação
void informarNumero(int);

int main(){
    int num = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    informarNumero(num);
}

void informarNumero(int num){
    if(num > 0){
        printf("Positivo \n");
    } else if(num < 0){
        printf("Negativo \n");
    } else if(num==0){
        printf("Nulo \n");
    }
}