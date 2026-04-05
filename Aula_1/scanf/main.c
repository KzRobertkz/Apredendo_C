#include<stdio.h>

void main() {
  int a;
  printf("endereço da memoria da variavel 'a': %p\n", &a); // imprimindo endereço da memoria com %P e usando o & que envia o endereço da variavel


  int idade;
  float altura;
  char letra_favorita;
  printf("\nqual é a sua idade?\n");  
  scanf(" %i", &idade);  // espaçamento antes do %i e os demais para funcionar o scan de dados corretamente
  printf("\nqual é a sua altura?\n");
  scanf(" %f", &altura);
  printf("\nqual é sua letra favorita?\n");
  scanf(" %c", &letra_favorita);

  printf("\nA sua idade é: %i Anos\nA sua altura é: %.2fm\nA sua letra favorita é:  '%c'\n", idade,altura,letra_favorita);
}