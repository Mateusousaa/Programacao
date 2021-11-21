#include <stdio.h>
#include <stdlib.h>

int main(){
int R, pos, num1, num2;

  printf("Digite um numero positivo: ");
  scanf("%i", &pos);

  while(pos<0){
      printf("Digite um numero positivo: ");
      scanf("%i", &pos);}
      
  printf("\nDigite dois numeros, onde o segundo seja maior que o primeiro!\n");
  printf("\nPrimeiro numero: ");
  scanf("%i", &num1);
  printf("\nSegundo numero: ");
  scanf("%i", &num2);

  while(num2 < num1){
    printf("\nSegundo numero: ");
    scanf("%i", &num2);}

  num2 = num2 - 1; 

  while(num1 != num2){ 
  R = pos * num2;
  printf("\n%i * %i = %i\n", pos, num2, R  );
  num2 = num2 - 1;}

  return 0;
}