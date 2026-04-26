#include <stdio.h>

// enum dia {domingo = 0, segunda = 1, terca = 2, quarta = 3, quinta = 4, sexta = 5, sabado = 6};
// definindo o tipo enum dia. como é um array, o numero alocado é da mesma forma que atribuir o dia e numero do dia na variavel usando o ' = ' como esta acima.
enum dia
{
    domingo,
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado
};

void main(){
    // criando uma variavel do tipo enum dia
    enum dia d;
    printf("Digite um dia da semana (0 a 6): ");
    // vamos adicionar um inteiro a nossa variavel enum
    scanf("%i", (int *)&d);
    switch (d)
    {
    // podemos utilizar os nomes já que estamos utilizando a variavel do tipo enum
    case domingo:
        printf("Domingo, dia de descansar!\n");
        break;
    case segunda:
        printf("Segunda\n");
        break;
    case terca:
        printf("Terça\n");
        break;
    case quarta:
        printf("Quarta\n");
        break;
    case quinta:
        printf("Quinta\n");
        break;
    case sexta:
        printf("Sexta\n");
        break;
    }
}