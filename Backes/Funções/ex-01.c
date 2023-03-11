#include <stdio.h>


int duplica (int * n) {
    *n = 2 * (*n); 
    return *n;
}

int main(int argc, int **argv) {
    int num = strtol(argv[1], NULL, 10);
    printf("%d\n", duplica(&num));

    return 0;
}