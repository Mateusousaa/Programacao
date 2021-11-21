#include<stdio.h>
#include<stdlib.h>

int main(){
    float maior;
    float X, Y, Z;
    printf("\nDigite o primeiro valor: ");
    scanf("%f", &X);
    maior = X;
    printf("\nDigite o segundo valor: ");
    scanf("%f", &Y);
    if (Y > maior) maior = Y;
    printf("\nDigite o terceiro Valor: ");
    scanf("%f", &Z);
    if (Z > maior) maior = Z;
    printf("\n\n\nO maior valor eh: %.0f\n\n\n", maior);
    return 0;
}