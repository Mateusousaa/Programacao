#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){

  float a, v0, t, v;

  printf("Digite a aceleracao: ");
  scanf("%f", &a);
  
  printf("\nDigite a velocidade inicial: ");
  scanf("%f", &v0);

  printf("\nDigite o  tempo de percurso: ");
  scanf("%f", &t);

  v = v0 + (a * t);
  
  if(v <= 40){
      printf("\n\nVeiculo muito lento.\n\n\n");}  
    else if(v>40 && v<=60) {
      printf("\n\nVelocidade permitida.\n\n\n");}
    else if(v>60 && v<=80){
      printf("\n\nVelocidade de cruzeiro.\n\n\n");} 
    else if(v>80 && v<=120){
      printf("\n\nVeiculo rapido.\n\n\n");}  
    else if(v>120){
      printf("\n\nVeiculo muito rapido.\n\n\n");}
    else{
      printf("\n\nERRO, TENTE NOVAMENTE!.\n\n\n");}  
  }