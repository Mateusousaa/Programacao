#include <stdio.h>
#include <stdlib.h>
int main(){
  char sexo;
 
  printf("Digite o sexo (F para feminino e M para masculino): ");
  scanf("%s", &sexo);

  while((toupper(sexo) != 'M') && (toupper(sexo) != 'F')){
      printf("\nSexo invalido, tente novamente.\nDigite o sexo: ");
      scanf("%s", &sexo);}

}