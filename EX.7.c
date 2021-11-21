#include<stdio.h>
#include <math.h>
int main()
{ //DIGITE O PREÇO DE 5 PRODUTOS PARA O PAGAMENTO DOS MESMOS.
    float produto1, produto2, produto3, produto4, produto5, soma, pago, troco;
    printf ("Digite o valor dos 5 produtos:\n\n");
    scanf ("%f %f %f %f %f", &produto1, &produto2, &produto3, &produto4, &produto5);
    soma = produto1 + produto2 + produto3 + produto4 + produto5;
    printf ("\nTOTAL A SER PAGO: R$ %.2f\n", soma);
    printf ("\nDigite o total pago em reais para calcular o troco:\n\n");
    scanf ("%f", &pago);
    troco = pago - soma;
    printf ("\nTROCO: R$ %.2f", troco);
}