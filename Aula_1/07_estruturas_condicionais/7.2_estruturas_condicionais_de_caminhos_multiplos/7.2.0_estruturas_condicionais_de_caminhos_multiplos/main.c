#include <stdio.h>

void main() {

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

  int opção;
  printf("\nDigite o número 1 ou 2: ");
  scanf("%i", & opção);

  switch (opção) {
    case 1:
        printf("\nVocê digitou 1.\n"); // Caso o numero digitado for 1, o resultado exibido será este 
        break; // Interrompe o switch imediatamente após executar este case e ele for verdadeiro, evitando que os próximos casos também sejam executados. Ou seja, se o número digitado for 1 o switch será interrompido imediatamente, e se não for o 1 o switch não será interrompido e proximo case será executado, que é o case 2 e assim sucessivamente. 

    case 2:
        printf("\nVocê digitou 2.\n"); // Caso o numero digitado for 2, o resultado exibido será este 
        break;
    
    default: // O default dentro do switch funciona como um caso padrão, ou seja, ele é executado quando nenhum dos case anteriores corresponde ao valor analisado que é o numero 1 e 2 a ser digitado.
        printf("\nVocê não digitou nem 1 nem 2.\n"); // Caso o numero digitado for nem 1 nem 2, o resultado exibido será este 
        break;
  }

  // Rode estes exemplos sem break pra mostrar seu funcionamento:
  // Exemplo de switch SEM break no case 1 (fall-through)
    printf("\nExemplo abaixo de switch sem 'break' no case 1:\n");

    switch (opção) {
        case 1:
            printf("\nVocê digitou 1.\n");
            // Como NÃO há break aqui, o programa NÃO para.
            // Ele continua executando o próximo case automaticamente,
            // mesmo que a condição não seja verdadeira (fall-through).

        case 2:
            printf("\nVocê digitou 2.\n");
            break; // Aqui o switch é interrompido

        default:
            printf("\nVocê não digitou nem 1 nem 2.\n");
            break;
    }

    // Exemplo de switch SEM break no case 1 e 2 
    printf("\nExemplo abaixo de switch sem 'break' no case 1 e case 2:\n");

    switch (opção) {
        case 1:
            printf("\nVocê digitou 1.\n");

        case 2:
            printf("\nVocê digitou 2.\n");

        default:
            printf("\nVocê não digitou nem 1 nem 2.\n");
            break; // Aqui o switch é interrompido
    }
};