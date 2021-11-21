#include <stdio.h>
#include <stdlib.h>

int main(){
  int num=1, R;

  printf("TABOADA DO 5 - DO 1 AO 10\n\n");

  while(num != 11){
  R = 5 * num;
  printf("5 x %i = %i \n",num,R); 
  num = num + 1;}
}