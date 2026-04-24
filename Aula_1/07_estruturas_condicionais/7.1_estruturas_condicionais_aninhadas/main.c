#include <stdio.h>

void main() {
  int n;

  printf("Digite um número: ");
  scanf("%i", & n);

  // Estrutura condicional aninhada (ou encadeada/encaixada) é o uso de um bloco if dentro de outro if, 
  // permitindo verificar múltiplas condições dependentes sequencialmente. Ela decide um fluxo entre várias alternativas, 
  // testando uma nova condição somente se a anterior for falsa ou verdadeira

  if (n < 0) {
    printf("O número %i é negativo\n", n);
  } else {

    if (n == 0) { // Outro IF dentro do IF incial que verifica se o numero é menor que '0'
      printf("O número %i é zero\n", n);
    } else{
      printf("O número %d é positivo\n", n);
    }

  };
};