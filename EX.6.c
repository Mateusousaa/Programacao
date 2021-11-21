#include<stdio.h>
#include <math.h>
int main()
{ //DIGITE O VALOR EM DÓLARES PARA CONVERTER PARA REAIS.
  // PREÇO DO DOLAR EM REAIS NO DIA 09/11/2021: R$ 5,48.
    float dolar, real;
    printf ("Digite o valor em dolares:\n\n");
    scanf ("%f", &dolar);
    real = 5.48 * dolar ;
    printf ("\nValor em reais convertido do dolar: R$ %.2f", real);
}