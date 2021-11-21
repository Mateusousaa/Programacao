
int main(){
  int numero1,numero2;

  printf("Digite 2 numeros, onde o segundo devera ser maior que o primeiro.\n\nDigite o primeiro numero: ");
  scanf("%i", &numero1);

  printf("\nDigite o segundo numero: ");
  scanf("%i", &numero2);
 
  while(numero1 >= numero2){
    printf("\n\nO numero 2 precisa ser maior que o numero 1.\nDigite novamente o numero 2: ");
    scanf("%i", &numero2);}

}