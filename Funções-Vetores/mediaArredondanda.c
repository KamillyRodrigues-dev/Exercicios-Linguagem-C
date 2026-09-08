/*Algoritmo que carrega o vetor em uma função, calcula a media em outra e por fim exibe 
a media arredondada em uma terceira função
  Author: Kamilly Vitoria
  Data: 08/09/2026
*/

#include <stdio.h>
#include <math.h>

//Prototipo
void carregarVetor(float*);
float calcularMedia(float*);
void exibirMediaArredondada(float);

main(){
    float media = 0.0;
    float vet[10];
    puts("Digite 10 numeros: ");
    carregarVetor(vet);
    media = calcularMedia(vet);
    exibirMediaArredondada(media);
}

void carregarVetor(float *V){
  for(int i = 0; i < 10; i++){
      scanf("%f", &V[i]);
  }
  
	puts("Conteudo do vetor");
    for(int i = 0; i < 10; i++){
       printf("%.2f | ", V[i]);
   }
}

float calcularMedia(float *M){
  int soma = 0;
  for(int i = 0; i < 10; i++){
      soma = soma + M[i];
  }
  return soma/10;
}

void exibirMediaArredondada(float media){
  printf("\nMedia Arredondada: %.2f", round(media));
}
