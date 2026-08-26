/*Algoritmo que faz uma contagem regressiva em uma função atraves de um numero que o usuario escreveu
  Author: Kamilly Vitoria
  Data: 25/08/2026
*/

#include <stdio.h>
int lerNum();
void verificarNum();

int main(){
    int num = 0;
    num = lerNum();
    verificarNum(num);

}

int lerNum(){
    int num = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    return num;
}

void verificarNum(int num){
    int q, res;
    q = res = 0;
    q = num/2;
    res = num - (q * 2);
    if (res == 0){
        printf("PAR! \n");
    } else {
        printf("IMPAR! \n");
    }
}