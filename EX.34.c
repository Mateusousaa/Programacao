#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int num[10], n, i;

    printf("Escreva 10 numeros, para descobrir o maior deles:\n");
    
    for(i=0; i<10; i++){
        scanf("%i", &num[i]);

        if (num[i]>n){
            n=num[i];}
    }
    printf("\n\nMaior numero entre os 10 digitados: Numero %i.\n\n\n", n);}