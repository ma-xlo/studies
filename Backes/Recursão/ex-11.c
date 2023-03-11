/*Escreva uma func ̧  ̃ao recursiva que exibe todos os elementos em um array de inteiros,
separados por espaco*/

#include <stdio.h>
#include <stdlib.h>


void printArray(int *array, int size) {

    if(size == 0) 
        return;

    printf("%d ", array[size - 1]);
    return printArray(array, size-1);

}
int main () {
    int *array;
    int size = 10;
    array = (int*)malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++)
    {
        array[i] = i+1;
    }

    printArray(array, size);
    
    return 0;
}