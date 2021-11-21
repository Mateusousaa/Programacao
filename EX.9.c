#include<stdio.h>
#include<stdlib.h>

int main(){
    float maior;
    float X, Y;
    printf("Digite o primeiro valor:\n\n");
    scanf("%f", &X);
    maior = X;
    printf("\nDigite o segundo valor:\n\n");
    scanf("%f", &Y);
    if (Y > maior) maior = Y;

    printf("\nO maior eh: %.0f\n", maior);
    return 0;
}