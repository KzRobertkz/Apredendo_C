#include<stdio.h>

// conversão por variavel
void main() {
  float b = 3.9;
  int i = (int)b; // cast = converte o valor de b em float para o valor inteiro atraves do truncamento(ignorando os valores que estao depois da virgula ao inves de arredondar para 4)
  printf("\nvalor convertido para int: %i\n", i); // \n(quebra de linha) servirá para não aparecer o '%' no terminal avisando que o programa chegou ao fim  

  // conversao na impressao (printf)
  float c = 3.9;
  printf("\nvalor convertido para int no printf: %i\n", (int)c); // \n(quebra de linha) servirá para não aparecer o '%' no terminal avisando que o programa chegou ao fim 

  // imprimindo caracteres
  char nome[] = "Caio";
  printf("\nimpressão da string: %s\n", nome); // %s para string
}


  