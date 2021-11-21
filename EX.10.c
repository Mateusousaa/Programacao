#include<stdio.h>
#include<stdlib.h>

int main(){
    float menor;
    float X, Y;
    printf("Digite o primeiro valor:\n\n");
    scanf("%f", &X);
    menor = X;
    printf("\nDigite o segundo valor:\n\n");
    scanf("%f", &Y);
    if (Y < menor) menor = Y;

    printf("\nO menor eh: %.0f\n", menor);
    return 0;
}