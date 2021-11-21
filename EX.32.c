#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    float num, A=2, B=2, Z=3, i;
    printf ("Digite a numero da razao da sequencia: ");
    scanf ("%f", & num);
    
    while (num<1 || num>100){
        printf("\nERRO! DIGITE UM NUMERO ENTRE 1 E 100...\nDigite um numero novamente: ");
        scanf ("%f", & num);}
    
    if (num<2){
        printf ("Soma = 2");}

    else{
        printf ("\n2, ");
        for (i = 1; i < num; i++){
            A=A+Z;
            B=B+A;
            Z=Z+2;

            printf ("%.0f, ", A);}

        printf("\n\nSoma da sequencia= %.0f\n\n----------------------------FIM DO PROGRAMA----------------------------\n\n\n", B);}
}    