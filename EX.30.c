#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
	setlocale (LC_ALL, "");
	int A=0, B=0, C=1, i=0;
	printf("Segue abaixo a sequencia de Fibonacci onde:\n- Os dois primeiros numeros sao 1;\n- Qualquer outro numero corresponde a soma dos dois anteriores.\n\n");

	while(i <= 30){
	printf("%i, ", C);
	A=B;
	B=C;
	C=A+B;
	i++;}

	printf ("\n\nSequencia de Fibonacci de 30 numeros concluida.\n\n\n");
}