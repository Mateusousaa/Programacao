#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n[10], i;
    printf("Escreva 10 numeros, para mostra-los inversamenete:\n");
    
    for(i=0; i<10; i++){
        scanf("%i", &n[i]);}
    
    printf("\n\nNumeros digitados em ordem inversa: ");
  
    for(i=9; i>=0; i--){
        printf("%i ", n[i]);}
}