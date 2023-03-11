/*# Week 5 - Exercícios Adicionais (Opcionais)
# Exercício 1 - FizzBuzz
# Escreva a função fizzbuzz que recebe como parâmetro um número inteiro e devolve
# 'Fizz' se o número for divisível por 3 e não for divisível por 5;
# 'Buzz' se o número for divisível por 5 e não for divisível por 3;
# 'FizzBuzz' se o número for divisível por 3 e por 5;
# Caso o número não seja divisível 3 e também não seja divisível por 5,
# ela deve devolver o número recebido como parâmetro.*/

#include <stdio.h>
#include <stdlib.h>


char * fizzbuzz(int n){

    if (n % 3 == 0 && n % 5 == 0) return "FizzBuzz";
    if (n % 3 == 0 && n % 5 != 0) return "Fizz";
    if (n % 5 == 0) return "Buzz";

    printf("%d\n", n);
    return "";
}

int main(){
    system("clear");
    printf("%s", fizzbuzz(5));

    return 0;
}
