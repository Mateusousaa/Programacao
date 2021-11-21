   #include <stdio.h>

   int main(void){
   int i, j;

   printf("TABUADA DO 1 AO 20 - INTERVALO DE 1/10\n\n");

   for (i = 1; i <= 20; i = i + 1){
   for (j = 1; j <= 10; j = j + 1)
   printf("%2d x %2d = %3d\n", i, j, j * i);
   printf("\n");}
   return 0;
   }