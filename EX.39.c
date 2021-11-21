#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int num[3][4], multp, a, b;
 
  printf("Digite 12 numeros para formar a matriz 3x4:\n");
  for(a=0; a<3; a++){
      for(b=0; b<4; b++){
        scanf("%i", &num[a][b]);}
    }
  printf("\n\nPor quanto voce quer multiplicar os numeros da matriz? ");
  scanf("%i", &multp);
  printf("\n\nMATRIZ 3x4: \n\n");
  for(a=0; a<3; a++){
      for(b=0; b<4; b++){
        printf("%i ", num[a][b]*multp);}
      printf("\n");}
  return 0;
}