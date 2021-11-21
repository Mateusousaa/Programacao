#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){

  float P1, P2;

  printf("Digite a nota da P1: ");
  scanf("%f", &P1);
  
  P2= (15 - P1)/2;

  printf("\n\nVoce precisa tirar no minimo %.2f na P2 para ser aprovado!\n\n\n", P2);
}