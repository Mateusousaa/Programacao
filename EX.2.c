#include <stdio.h>
void main()
{
   float aresta, area;
   printf("DIGITE A MEDIDA DA ARESTA DO QUADRADO PARA CALCULAR SUA ÁREA.");
   printf("\nDigite a aresta do quadrado: ");
   scanf("%f", &aresta);
   area = aresta * aresta;
   printf("Area do quadrado = %.0f \n",area);
   system("pause");
}