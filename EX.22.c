#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
  setlocale (LC_ALL, "");
  int numero;
  printf("Crie uma rotina de entrada que aceite somente um valor positivo.\n");
  for (;;){
  printf("\nDigite um numero: ");
  scanf("%i", &numero);
 
  if (numero < 0){
    printf("\n\nDigite apenas numeros positivos!\nDigite um numero: ");
    scanf("%i", &numero);}
  }
getch();
return(0);
}

