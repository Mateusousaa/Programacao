#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int multp, val[20], i;

    printf("Digite 20 numeros:\n");
    
    for(i=0; i<20; i++){
        scanf("%i", &val[i]);}

    printf("\n\nPor quanto voce deseja multiplicar os numeros digitados? ");
    scanf("%i", &multp);
    printf("\n\nOs numeros resultantes depois de multiplicar foram: ");

    for(i=0; i<20; i++){
        val[i]=val[i]*multp;
        printf("%i, ", val[i]);}
}