#include <stdio.h>

int main() {
    int n1, n2, div;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um numero: ");
    scanf("%d", &n2);

    (n1 < n2) ? (div = n1) : (div = n2);
    for(; !(n1 % div == 0 && n2 % div == 0) ; div--);
    
    printf("MDC de %d e %d: %d\n", n1, n2, div);

    return 0;
}
