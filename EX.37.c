#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
int q, i, loop, val=0, c;
int *num;

do{
system("cls");

printf("Armazene no maximo 20 numeros para consulta e exibicao no vetor.\n");
printf("\nDigite a quantidade de valores: ");
scanf("%i", &q);

while(q >20 || q <0){
printf("\n\nERRO! A quantidade tem que ser > 0 e <= 20.\nDigite novamente: ");
scanf("%i",&q);}

num = (int*)malloc(q*sizeof(int));

printf("\nDigite os numeros:\n");
for(i=0; i < q; i++){
    scanf("%i", &num[i]);}
printf("\nQual numero voce deseja consultar? ");
scanf("%i", &c);

for(i=0; i < q; i++){ 
   if (c == num[i]){
       printf("\n\nO numero %i esta na posicao %i do vetor.\n\n", c, i);}
   else{
    val++;}

if(val == q){
       printf("\nValor nao encontrado.\n");
       val=0;}}
printf("\nDigite 1 para nova consulta ou 0 para encerrar o programa: ");
    scanf("%i", &loop);}
    
while(loop !=0);
return 0;
}