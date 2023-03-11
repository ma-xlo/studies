//Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9

#include <stdio.h>
#include <stdlib.h>

int main (void) {
    
    printf("-------------------------------------------\n");
    printf("|                  Tabuada                |\n");
    printf("-------------------------------------------\n");
    
    for(int i = 1; i <= 10; i++) {
        printf("Tabuada do: %d\n", i);
        for(int j = 0; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, j * i);
            if ( j == 10) {
                printf("\n");
            }
        }
    }

    printf("-------------------------------------------\n\n");
}
