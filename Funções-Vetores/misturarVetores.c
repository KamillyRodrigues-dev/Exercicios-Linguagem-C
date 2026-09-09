/*
	Name: misturarVetores.cpp
	Author: Kamilly Vitoria
	Date: 08/09/26 21:47
	Description: Algoritmo que recebe dois vetores em uma função, armazenando nome e rg e cpf em um
	depois mistura os valores em outro vetor
*/

#include <stdio.h>
#include <string.h>

void merge(char*);
void exibir(char*);

main(){
	char frase;
	char crypto[200];
	merge(crypto);
	exibir(crypto);
	
}

void merge(char *C){
	char vetor1[100];
	char vetor2[100];

	puts("Escreva seu nome completo: ");
	gets(vetor1);
	
	puts("Escreva seu CPF e RG: ");
	gets(vetor2);
	
	int tam1 = strlen(vetor1);
	int tam2 = strlen(vetor2);
	
	int maiorTam = tam1;
	if(tam2 > tam1)
		maiorTam = tam2;
	
	int j = 0;
	for(int i = 0; i < maiorTam; i++){
		if(i < tam1){
			C[j] = vetor1[i];
			j++;
		}
		if(i < tam2){
			C[j] = vetor2[i];
			j++;
		}
	}
	C[j] = '\0'; // Finaliza a string
}

void exibir(char *frase){
	printf("Saida: %s\n", frase);
}