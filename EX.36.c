#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int multp, i, val[20], n[20];

    printf("Digite 20 numeros:\n");
    
    for(i=0; i<20; i++){
        scanf("%i", &val[i]);      }

    printf("\n\nPor quanto voce deseja multiplicar os numeros digitados? ");
    scanf("%i", &multp);
    printf("\n\nOs numeros resultantes depois de multiplicar foram: ");

    for(i=0; i<20; i++){
        n[i]= val[i]*multp;
        printf("%i, ", n[i]);}
}