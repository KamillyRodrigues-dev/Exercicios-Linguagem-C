/*Algoritmo que le um numero atraves de uma função e verifica se é impar ou par em outra função
  Author: Kamilly Vitoria
  Data: 25/08/2026
*/

#include <stdio.h>

void classificarIdade();

int main(){
    int idade = 0;
    char nome[50];
    printf("Escreva seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    classificarIdade(nome, idade);
}

void classificarIdade(char nome [], int idade){
    if (idade < 3){
        printf("BEBÊ \n");
    } else if (idade < 13){
        printf("CRIANÇA \n");
    } else if (idade < 20){
        printf("ADOLESCENTE \n");
    } else if (idade < 60){
        printf("ADULTO \n");
    } else if (idade < 91){
        printf("IDOSO \n");
    } else if (idade > 90){
         printf("MATUSÁLEM \n");
    }
}