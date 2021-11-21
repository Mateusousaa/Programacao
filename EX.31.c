#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float A=1, B=1, C=1, R, i;
	printf("Segue abaixo a sequencia de Bergamaschi onde:\n- Os tres primeiros numeros sao 1;\n- Qualquer outro numero corresponde a soma dos tres anteriores.\n\n");

    printf ("%.0f, %.0f, %.0f, ", A, B, C);

    for (i = 1; i <=17; i++){
        R=A+B+C;
        
        printf ("%.0f, ", R);
        
        C=B;
        B=A;
        A=R;}

  printf ("\n\nSequencia de Bergamaschi de 20 numeros concluida.\n\n\n");
}