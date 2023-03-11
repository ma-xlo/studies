#include <stdio.h>

#define MAX_LINHA 30
#define MAX_COLUN 30

void main() {

    int linha, coluna;

    do {
        printf("Numero de Linhas: ");
        scanf("%d", &linha); 
        printf("Numero de Colunas: ");
        scanf("%d", &coluna); 
        if(linha > MAX_LINHA)
            printf("Numero de elementos acima do limite!\n");

    } while(linha > MAX_LINHA);

    float matriz[linha][coluna];

    for(int i = 0; i < linha; i++) {
        printf("--- Linha %d ---\n", i+1);
        for(int j = 0; j < coluna; j++) { 
            printf("Coluna %d: ", j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("\n");

    printf("+-- Transposta ");

    for(int j = 0; j < coluna; j++) {
        printf("-");
    }
    printf("+\n");

    for(int j = 0; j < coluna; j++) {
            printf("| ");
        for(int i = 0; i < linha; i++) 
            printf("%.1f  ", matriz[i][j]);
        printf("|\n");
    }

    printf("+");
    for(int j = 0; j < coluna + 14; j++) {
        printf("-");
    }
    printf("+\n");

}
