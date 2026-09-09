/*Algoritmo que recebe tres notas e faz a media das tres notas, das duas mais altas e mostra quais sao
  as duas notas mais altas
  Author: Kamilly Vitoria
  Data: 01/09/2026
*/

#include <stdio.h>

//Sessão de Prototipação
void calcularNotas(float *, float *, float *);

 int main(){
      float p1, p2, p3;
      p1 = p2 = p3 = 0.0;
      printf("Digite a nota na Primeira Prova: ");
      scanf("%f", &p1);
      printf("Digite a nota na Segunda Prova: ");
      scanf("%f", &p2);
      printf("Digite a nota na Terceira Prova: ");
      scanf("%f", &p3);
      calcularNotas(&p1, &p2, &p3); // passa o endereço das variaveis para a função
}

void calcularNotas(float *p1, float *p2, float *p3){ // aponta/referencia para o valor fora da função
  float media3N, media2NAltas, maiorNota1, maiorNota2;
  media3N = media2NAltas = maiorNota1 = maiorNota2 = 0.0;
  media3N = (*p1 + *p2 + *p3)/3;

   if (*p1 >= *p3 && *p2 >= *p3){
    maiorNota1 = *p1;
    maiorNota2 = *p2; 
   } else if(*p1 >= *p2 && *p3 >= *p2){
    maiorNota1 = *p1;
    maiorNota2 = *p3; 
   } else{
    maiorNota1 = *p2;
    maiorNota2 = *p3;
   }

  media2NAltas = (maiorNota1 + maiorNota2) / 2;

  printf("A media das 3 provas é: %.2f \n", media3N);
  printf("A media das 2 provas com nota mais alta é: %.2f \n", media2NAltas);
  printf("As maiores notas são: %.2f e %.2f \n", maiorNota1, maiorNota2);

}