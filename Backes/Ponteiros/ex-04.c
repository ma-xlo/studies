#include <stdio.h>

int swap(int * pa, int * pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main() {

    int a = 10, b = 20;

    printf("Before swap: A -> %d\tB -> %d\n", a, b);
    swap(&a, &b);
    printf("After swap:  A -> %d\tB -> %d\n", a, b);

    return 0; 
}