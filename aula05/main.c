#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Parei no inicio da aula 06 - Entrada e saida

    int i, in, im; //Armazena numeros inteiros, neste exemplo é declarada 3 variaveis direto;
    float f;//Armazena numeros com ponto flutuante, numeros reais;
    double d;//Pararecido com float, prorem armazena numeros muito pequenos ou muito grandes;
    char c;//Armazena caracteres de informacao

    i = 5;
    f = 2.6;
    d = 13243243.2343243243;
    c = 'S';

    printf("i: %d \n\n", i);
    printf("f: %f \n\n", f);
    printf("d: %f \n\n", f);
    printf("c: &c \n\n", c);

    float num1 = 10, num2 = 4, result;

    result = num1 / num2;

    printf("O resultado eh: %.2f \n\n", result);

    /*int x;
    float cons;

    x = 5;
    cons = 3.14;

    result = x * cons;

    printf("O resultado eh: %.2f \n\n", result);
    */


    return 0;
}
