#include <stdio.h>

void main() {
  int x;
  printf("Digite um inteiro: ");
  scanf("%i", & x);

  // Sintaxe IF(CONDIÇÃO) { RESULTADO SE VERDADEIRO }. OBS: '% 2' é a operação módulo 2(mod 2), entendendo que se o numero for divido por 2 e resta 0 ele é par, se não é impar, ou seja, se ele é divisível por 2 ou não. 
  // 14 mod 2 = 0 -> (14 ÷ 2 = 7, resto 0) -> Par
  // 15 mod 2 = 1 -> (15 ÷ 2 = 7, resto 1) -> Ímpar 

  if (x % 2 == 0) { // operador '==' de igualdade/equivalencia, se a operação matemática 'x % 2' tem resultado equivalente a '0'
    printf("O número %i é par.\n", x);
  };
  if (x % 2 == 1) { // operador '==' de igualdade/equivalencia, se a operação matemática 'x % 2' tem resultado equivalente a '1'
    printf("1° opção de solução: ");
    printf("O número %i é ímpar.\n", x);
  };
  if (x % 2 != 0) { // operador '!=' de diferença, se a operação matemática 'x % 2' tem resultado diferente de '0'
    printf("2° opção de solução: ");
    printf("O número %i é ímpar.\n", x);
  };

  // Estrutura condicional de 2 caminhos, entendendo e exibindo se o resultado é verdairo ou falso
  // se verdadeiro exibe um resultado, se falso exibe outro resultado
  // Sintaxe IF(CONDIÇÃO) { RESULTADO SE VERDADEIRO } else { RESULTADO SE FALSO }

  if (x % 2 == 0) { // Exibe o resultado da operação matemática 'x % 2' caso seja VERDADEIRO
    printf("\nSolução com estrutura condicional if/else = VERDADEIRO: ");
    printf("O número %i é par.\n", x);
  } else { // Exibe o resultado da operação matemática 'x % 2' caso seja FALSO
    printf("\nSolução com estrutura condicional if/else = FALSO: ");
    printf("O número %i é ímpar.\n", x);
  };
};