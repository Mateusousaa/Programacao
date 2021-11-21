#include <stdio.h>

void main() {
  int peso;
  float altura, imc;

  printf("Digite seu peso em KG:\n");
  scanf("%d", &peso);

  printf("\nDigite sua altura em metros (utilize o ponto '.' no lugar da virgula):\n");
  scanf("%f", &altura);

  imc = peso / (altura * altura);
printf ("\nIMC = %.2f\n\n", imc);
}