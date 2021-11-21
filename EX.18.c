#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
  char sexo;
  int peso;
  float altura, R;

  printf("Digite seu peso em KG:\n");
  scanf("%d", &peso);

  printf("\nDigite sua altura em metros (utilize o ponto '.' no lugar da virgula):\n");
  scanf("%f", &altura);

  printf("\nDigite seu sexo (f ou m):\n");
  scanf("%f", &sexo);

  R = peso / (altura * altura);
  printf ("\nIMC = %.2f\n", R);

    if (sexo = 'f'){
    if (R<19){
	printf("Abaixo do peso.\n\n");}
	    else if (R >= 19 && R <24){
	    printf ("Peso ideal.\n\n");}
            else if (R>=24){
			printf ("Acima do peso.\n\n");}}

    else if (sexo = 'm'){
    if (R<20){
	printf("Abaixo do peso.\n\n");}
	    else if (R >= 20 && R <25){
	    printf ("Peso ideal.\n\n");}
            else if (R>=25){
			printf ("Acima do peso.\n\n");}}

return 0;
}