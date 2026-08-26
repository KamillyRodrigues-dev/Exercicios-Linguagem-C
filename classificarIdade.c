/*Algoritmo que le nome e idade e classifica a idade por meio de uma função
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
        printf("Seu nome é %s, você tem %d e é um bebê \n", nome, idade);
    } else if (idade < 13){
        printf("Seu nome é %s, você tem %d e é uma criança \n", nome, idade);
    } else if (idade < 20){
        printf("Seu nome é %s, você tem %d e é um adolescente \n", nome, idade);
    } else if (idade < 60){
        printf("Seu nome é %s, você tem %d e é um adulto \n", nome, idade);
    } else if (idade < 91){
        printf("Seu nome é %s, você tem %d e é um idoso \n", nome, idade);
    } else if (idade > 90){
         printf("Seu nome é %s, você tem %d e é um matusálem \n", nome, idade);
    }
}