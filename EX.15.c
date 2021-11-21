#include <stdio.h>

void main() {
  int peso;
  float altura, R;

  printf("Digite seu peso em KG:\n");
  scanf("%d", &peso);

  printf("\nDigite sua altura em metros (utilize o ponto '.' no lugar da virgula):\n");
  scanf("%f", &altura);

  R = peso / (altura * altura);
printf ("\nIMC = %.2f\n", R);

    if (R<20){
	printf("Abaixo do peso.\n\n");}
	    else if (R >= 20 && R <25){
	    printf ("Peso ideal.\n\n");}
            else if (R>=25){
			printf ("Acima do peso.\n\n");}
}