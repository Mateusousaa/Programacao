#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
int num=0, R, pos;
  printf("Digite um valor positivo: ");
  scanf("%i", &pos);

  while(pos < 0){
      printf("\n\nDigite um valor positivo: ");
      scanf("%i", &pos);}

  while(num != 11){
    R = pos * num;
    printf("\n%i x %i = %i\n", pos, num, R);
    num = num + 1;}

return 0;}