#include<stdio.h>
#include <math.h>
int main()
{ //DIGITE A TEMPERATURA EM ºC PARA CONVERTE-LA EM ºF.
    float F, C;
    printf ("Digite a temperatura em graus celsius para converte-la para Fahrenheit:\n\n");
    scanf ("%f", &C);
    F = (9*C/5) + 32;
    printf ("\nTemperatura em graus Fahrenheit: %.1f", F);
}