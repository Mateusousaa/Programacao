#include <stdio.h>
void main()
{
   float l1, l2, area; //L1 e L2 são valores equivalentes a base e altura.
   printf("DIGITE AS MEDIDAS DO RETANGULO PARA CALCULAR SUA AREA.");
   printf("\nDigite a medida do lado 1: ");
   scanf("%f", &l1);
   printf("Digite a medida do lado 2: ");
   scanf("%f", &l2);
   area = l1 * l2;
   printf("\nArea do retangulo = %.0f \n",area);

   if (area > 100){
   printf ("\nTerreno grande.\n\n\n");}

   system("pause");

}