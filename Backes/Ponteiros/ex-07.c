#include <stdio.h>

int sum(int * a, int * b) {
    *a += *b; 
}

int main() {

    int a = 10, b = 20;

    sum(&a, &b);

    printf("%d\n", a);

    return 0; 
}