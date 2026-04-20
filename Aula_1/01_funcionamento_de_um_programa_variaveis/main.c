#include<stdio.h>

void main(){ 
  //caracteres
  char nome_da_variavel;
  /* aspas simples ('') é para 1 caracter e aspas duplas ("") é para um conjunto de caracteres (string) */
  nome_da_variavel = 'a';// -127 até 127 bits = 255 valores (8 bits = 1 byte = 256bits) 
  unsigned char nome_da_variavel;// 0 até 255 bits = 255 valores sem valores negativos no ACII(8 bits = 1 byte = 256bits) 

  //numeros inteiros
  int nome_da_variavel;
  short int nome_da_variavel;
  long int nome_da_variavel;
  /* unsigened = sem sinal: variavel que não armazena numeros negativos */
  unsigned int nome_da_variavel;
  unsigned short int nome_da_variavel;
  unsigned long int nome_da_variavel;

  //numeros reais
  float nome_da_variavel;
  double nome_da_variavel;
  long double nome_da_variavel;

  //constante nomeada
  const int MAX = 100; //por ser constante não conseguimos trocar o seu valor atribuido. ou seja, será para sempre o valor inicial que lhe foi dado 
  
}