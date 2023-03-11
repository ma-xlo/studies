/*
Implemente a função fatorial(x), que recebe como parâmetro um número inteiro
e devolve um número inteiro correspondente ao fatorial de x.

Sua solução deve ser implementada utilizando recursão.
*/
#include <stdio.h>

int factorial(int x) {
    if (x == 1) return 1;

    return x * factorial(x-1);
}

main () {   

    printf("%d\n", factorial(5));

}