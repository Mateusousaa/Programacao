#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]){
  int num[20][20], coluna, linha, cons, a, b, novacons;
 
  printf("Digite os numeros para formar a matriz M x N:\n");
  printf("\nQuantas colunas formarao a matriz? ");
  scanf("%i", &coluna);
  printf("\nQuantas linhas formarao a matriz? ");
  scanf("%i", &linha);

  while(coluna >10){
    printf("DADOS INCORRETOS!");
    scanf("%i", &coluna);}
    while(linha >10){
    printf("DADOS INCORRETOS!");
    scanf("%i", &linha);}

  printf("\nDigite os numeros para formar a matriz %i x %i \n", coluna, linha);
  for(a=0; a<coluna; a++){
      for(b=0; b<linha; b++){
        scanf("%i", &num[a][b]);}
    }
 
  printf("\n\nMATRIZ %i x %i:\n\n", coluna, linha);
  for(a=0; a<coluna; a++){
      for(b=0; b<linha; b++){
        printf("%i ", num[a][b]);}
        printf("\n");}
//consulta
  printf("\n\nQual numero voce deseja consultar? "); 
  scanf("%i", &cons);
  for(a=0; a<coluna; a++){
      for(b=0; b<linha; b++){
        if(cons == num[a][b]){
          printf("\nO numero esta na posicao %i, %i do vetor.\n", a,b);}}
        }
      if(cons == num[a][b]){
          printf("\nESSE NUMERO NAO ESTA PRESENTE NO VETOR.\n");}
       printf("\nDeseja realizar nova consulta? ");
       scanf("%i", &novacons);

      while((toupper(novacons) != 1) && (toupper(novacons) != 0)){
      printf("\nDADOS INCORRETOS! DIGITE 1 PARA SIM OU 0 PARA NAO.\n");
      scanf("%s", &novacons);}

       if(novacons == 0){
      printf("------------------------------ FIM DO PROGRAMA ------------------------------");} 

         printf("\n\nQual numero voce deseja consultar? ");
        scanf("%i", &cons);
        for(a=0; a<coluna; a++){
        for(b=0; b<linha; b++){
            if(cons == num[a][b]){
            printf("\nO numero esta na posicao %i, %i do vetor.\n", a,b);}}
            }
      if(cons == num[a][b]){
          printf("\n\nESSE NUMERO NAO ESTA PRESENTE NO VETOR.\n\n\n");}

return 0;
}