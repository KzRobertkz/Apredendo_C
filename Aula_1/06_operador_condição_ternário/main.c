#include<stdio.h>

void main() {
  int a, b, maior;
  printf("digite um número: "); 
  scanf("%i",&a);
  printf("\ndigite o segundo número: "); 
  scanf("%i",&b);

  // sintaxe --> CONDIÇÃO/EXPRESSÃO ? RESPOSTA SE VERDADEIRA : RESPOSTA SE FALSO;
  maior = a > b ? a : b; // A condição será atribuida na variável 'maior', indicando que se 'a' for maior que 'b', exibirá 'a' se for verdadeiro e 'b' se for falso

  printf("\nO maior numero digitado foi: %i\n", maior);
}