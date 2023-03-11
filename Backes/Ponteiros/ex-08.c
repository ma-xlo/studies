#include <stdio.h>


int main() {

    float array[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0; i < 10; i++) 
        printf("Posicao: %p -> %.1f\n", array[i], array[i]);

    return 0; 
}