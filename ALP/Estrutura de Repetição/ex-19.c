#include <stdio.h>

void main(void) {
    float soma = 0, num=100;
    
    for(int i = 0; i < 10; i++) {
        int fat=1;
        for(int k = i; k > 0; k--) {
                fat *= k; 
        }
        soma += num/fat;
        num--;
        printf("%.10f\n", soma);
    }
}