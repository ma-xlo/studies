#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

int main() {

    int x, y, *px , *py;
    char z, *pz;
    px = &x, py = &y, pz = &z;

    x = 5, y = 10;
    z = 'a'; 

    printf("Before: %d, %d, %c\n", x,y,z);
    *px = 10;
    *py = 20;
    *pz = 'A';
    printf("After: %d, %d, %c\n", x,y,z);

    return 0;
}