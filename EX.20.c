#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){

  float P1, P2, media;

  printf("Digite a nota da P1: ");
  scanf("%f", &P1);
  
  printf("\nDigite a nota da P2: ");
  scanf("%f", &P2);

  media = (P1 + 2*P2)/3;
  printf("\nMedia: %.2f", media);

  if(media >= 5){
      printf("\nAprovado!\n\n\n");}
    else{
        printf("\nReprovado!\n\n\n");} 
}