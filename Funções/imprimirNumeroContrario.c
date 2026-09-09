/*
	Name:imprimirNumeroContrario.cpp
	Author: Kamilly Vitoria
	Date: 08/09/26 23:02
	Description: Algoritmo que le um numero inteiro e o imprime ao contrario sem vetor
*/

#include <stdio.h>
void imprimirNumeroContrario(int);

main(){
	int num;
	puts("Digite um numero inteiro: ");
	scanf("%d", &num);
	imprimirNumeroContrario(num);
}

void imprimirNumeroContrario(int num){
	while( num > 0 ){
		int digito = num % 10;
		printf("%d ", digito);
		num = num/10;
	}
}

