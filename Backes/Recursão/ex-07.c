/*Fac ̧a uma função recursiva que receba um numero inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem crescente*/
#include <stdio.h>

int ascendingRecursive(int n, int start) {
    if(n == start) {
        printf("%d\n", start);
        return 0;
    }
    printf("%d\n", start);

    start++;
    return ascendingRecursive(n, start);

}

int main () {
    
    ascendingRecursive(5, 0);
    
    return 0;
}