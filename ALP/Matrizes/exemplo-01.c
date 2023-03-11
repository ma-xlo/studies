#include <stdio.h>

#define MAX 5

void main() {
    float matriz_A[MAX], matriz_B[MAX], num=0, total;

    for(int i = 0; i < MAX; i++) {
        matriz_A[i] = 0;
        matriz_B[i] = 0;
    }

    printf("Preencha os valores das matrizes\n");

    for(int i = 0; i < MAX; i++) {
        printf("Matriz A: "); 
        scanf("%f", &num); 
        if(num <= 0)
            break;
        matriz_A[i] = num;
    }

    for(int i = 0; i < MAX; i++) {
        printf("Matriz B: "); 
        scanf("%f", &num); 
        if(num <= 0)
            break;
        matriz_B[i] = num;
    }

    printf("+---------------------+\n");
    printf("| Matriz A | Matriz B |\n");
    printf("+---------------------+\n");
    for(int i = 0; i < MAX; i++) {
        if(matriz_A[i] != 0 && matriz_B[i] != 0)
            printf("| %8.1f | %8.1f |\n", matriz_A[i], matriz_B[i]);
        else if(matriz_A[i] == 0 && matriz_B[i] == 0)
            printf("| %6c-- | %6c-- |\n", ' ', ' ');
        
        
        total += matriz_A[i] + matriz_B[i];
    }
    printf("+---------------------+\n");
    printf("| Total: %12.1f |\n", total);
    printf("+---------------------+\n");
}
