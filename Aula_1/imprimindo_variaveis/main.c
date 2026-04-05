#include<stdio.h>

void main(){ 
  //caracteres
  char nome_da_variavel;
  /* aspas simples ('') é para 1 caracter e aspas duplas ("") é para um conjunto de caracteres (string) */
  char nome_da_variavel1 = 'a';// -127 até 127 bits = 255 valores (8 bits = 1 byte = 256bits) 
  unsigned char nome_da_variavel;// 0 até 255 bits = 255 valores sem valores negativos no ACII(8 bits = 1 byte = 256bits) 
  printf("Imprimindo a variavel do tipo char: %c", nome_da_variavel1); // %c para char

  //numeros inteiros
  int nome_da_variavel2;
  short int nome_da_variavel;
  long int nome_da_variavel3;
  printf("Imprimindo a variavel do tipo int: %i", nome_da_variavel2); // %i para int e %d tambem funciona
  printf("Imprimindo a variavel do tipo long int: %li", nome_da_variavel3); // %li para long int 

  /* unsigened = sem sinal: variavel que não armazena numeros negativos */
  unsigned int nome_da_variavel4;
  unsigned short int nome_da_variavel;
  unsigned long int nome_da_variavel5;
  printf("Imprimindo a variavel do tipo unsigend: %u", nome_da_variavel4); // %u para unsigned int 
  printf("Imprimindo a variavel do tipo unsigend long int: %lu", nome_da_variavel5); // %lu para long int 

  //numeros reais
  float nome_da_variavel6;
  double nome_da_variavel;
  long double nome_da_variavel7;
  printf("Imprimindo a variavel do tipo float: %f", nome_da_variavel6); // %f para float e double
  printf("Imprimindo a variavel do tipo long double: %e", nome_da_variavel7); // %e para variaveis long double

  //constante nomeada
  const int MAX = 100; //por ser constante não conseguimos trocar o seu valor atribuido. ou seja, será para sempre o valor inicial que lhe foi dado 
  
}