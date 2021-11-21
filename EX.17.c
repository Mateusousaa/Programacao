#include <stdio.h>
#include <math.h>

int main (void) {
    int hip, cat1, cat2;
    printf ("Digite o valor do cateto:\n");
    scanf("%d", &cat1);
    printf ("\nDigite o valor do cateto:\n");
    scanf("%d", &cat2);
    printf ("\nDigite o valor da hipotenusa:\n");
    scanf("%d", &hip);
    if (hip * hip == cat1 * cat1 + cat2 * cat2){
    printf("\n\nOs valores digitados formam um triangulo retangulo!\n\n");}
    else 
    {printf("\n\nOs valores digitados nao formam um triangulo retangulo!\n\n");}
}