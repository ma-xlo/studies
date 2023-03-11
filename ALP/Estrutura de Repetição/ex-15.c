#include <stdio.h>

void main(void) {
    int n=5, fat=1;
    for(n;n>0;n--){
        fat*=n;
    }
    printf("Fatorial de %d: %d\n", n, fat);
}