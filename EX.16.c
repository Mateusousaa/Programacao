#include <stdio.h>
int main ()
{
int A, B, C;
printf ("Digite os valores de A, B e C para descobrir o  tipo do triangulo:\n");
scanf ("%d %d %d",&A, &B, &C);
if (A<B+C && B<A+C && C<A+B){
    if (A == B && B == C)
	{
    printf ("Eh um triangulo equilatero.");}
        else if (A == B || A == C || B == C){
	    printf ("Eh um triangulo isosceles.");}
	        else
	        printf ("Eh um triangulo escaleno.");}
                else
                printf ("Os valores fornecidos nao formam um triangulo.");}
