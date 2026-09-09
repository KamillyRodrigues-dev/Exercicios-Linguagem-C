/*
	Name: verificarPalindromo.cpp
	Author: KamillyVitoria
	Date: 08/09/26 20:37
	Description: algoritmo que le uma sequencia de caracteres é um palindromo ou não
*/

#include <stdio.h>
#include <string.h>

void verificarPalindromo(char*);

main(){
	char vet[10];
	printf("Digite uma frase para verificar se eh um palindromo ou nao: ");
	gets(vet);
		
	verificarPalindromo(vet);
}

void verificarPalindromo(char *P){
	int tam = strlen(P); //Pega a quantidade de letras da string
	char vetInvertido[10]; 
	int j = 0;
	int palindromo = 0;
	
	//For para fazer com que vetInvertido recebe o valor da ultima posição de P em sua primeira posição
	for(int i = tam - 1; i >= 0; i--){
		vetInvertido[i] = P[j];
		j++;
	}
	
	//For para comparar as posições e ver se são iguais
	for(int i = 0; i < tam; i++){
		if(vetInvertido[i] == P[i]){
			palindromo = 1;
		} else{
			palindromo = 0;
		}
		j++;
	}
	
	if(palindromo == 1){
		printf("Eh palindromo!");
	} else if (palindromo == 0){
		printf("Nao eh palindromo");
	}
}

