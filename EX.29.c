#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
int num1=0, num2=0, R, soma=0;
printf("Exibir a soma dos numeros inteiros positivos de 1 a 100:\n\n");
  
  for(int num1=0; num1 != 102; num1 = num1 +2){
        R = num1 + num2;  
        printf("%i + %i = %i \n", num1, num2, R);
        num2 = R;}

   printf("\n\nFIM DA SOMA!\nResultado = %i\n\n", R);

  return 0;
}