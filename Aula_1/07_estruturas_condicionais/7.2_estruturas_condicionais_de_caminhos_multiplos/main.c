#include <stdio.h>

void main() {
  int n;

  // Essa estrutura condicional faz uso do comando 'switch' que permite selecionar um bloco de código entre várias alternativas, 
  // baseando-se no valor de uma única variável. É uma alternativa mais organizada e legível ao uso de múltiplos if-else.
  // Sintaxe:
  /*  switch (variavel) {
        case um_valor_da_variavel:
            código/intruções
            break;
        case um_valor_da_variavel:
            código/intruções
            break;
        default:
            código/intruções se nenhum caso acima for atendido
      }
  */
  printf("Digite um número: ");
  scanf("%i", & n);
};