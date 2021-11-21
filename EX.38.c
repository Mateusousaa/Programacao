#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]){
int a, b, num[2][3];
 
  printf("Digite 6 numeros para formar a matriz 2x3:\n");
  for(a=0; a<2; a++){
      for(b=0; b<3; b++){
        scanf("%i", &num[a][b]);}
  }
  printf("\n\nMATRIZ 2x3: \n\n");
  for(a=0; a<2; a++){
      for(b=0; b<3; b++){
        printf("%i ", num[a][b]);}
      printf("\n");}
}