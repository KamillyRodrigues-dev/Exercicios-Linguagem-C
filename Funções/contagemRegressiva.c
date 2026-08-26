/*Algoritmo que calcula IMC atraves de uma função, essa função retona o resultado e uma mensagem
  Author: Kamilly Vitoria
  Data: 25/08/2026
*/

#include <stdio.h>
//Seção de importação
int contarRegressiva(int);

int main(){
    int num = 0;
    printf("Escreva um numero: ");
    scanf("%d", &num);
    contarRegressiva(num);
}

int contarRegressiva(int num){
    int i = 0;
    for(i = num; i >= 0; i--){
        printf("\n" "%d", i);
    }
    printf("\nFogooooo! \n");
}