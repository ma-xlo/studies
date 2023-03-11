#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINHAS 25
#define MAX_COLUNAS 73

void main(void)
{   
    int i, j, k, l1, l2, quantLinha=0;
    char linha[MAX_LINHAS][MAX_COLUNAS], copia[MAX_COLUNAS];

    //system("clear");
    printf("/// Editor //////////////////////////////////////////////////////////////////////////\n");
    //printf("                         [t]Trocar linha [r] Redigitar  [i] Mostrar texto  [s] Sair\n");
    
    for(i = 0; i < MAX_LINHAS; i++) 
    {   
        printf("  %d  ", i+1);
        fseek(stdin,0,SEEK_END);
        fgets(linha[i], MAX_COLUNAS, stdin);
        fseek(stdin,0,SEEK_END);
        
        for(int j = 0; linha[i][j] != '\0'; j++)
            if(linha[i][j] == '\n')
                linha[i][j] = '\0';

        if(linha[i][0] == 'i' && linha[i][1] == '\0') 
        {
            printf("        +---------------------------- Texto Digitado ------------------------------+\n");  
            for(k = 0; k < quantLinha; k++) 
                printf(" %3d >> | %-72s |\n", k+1, linha[k]); 
            printf("        +--------------------------------------------------------------------------+\n\n");
            printf("/// Editor /////////////////////////////////////////////////////////////////////////\n");
            
            quantLinha--;
            i = quantLinha;
        }

        if(linha[i][0] == 't' && linha[i][1] == '\0') 
        {
            printf("Trocar linha: ");
            scanf(" %d", &l1);
            printf("Por linha: ");
            scanf(" %d", &l2);
            fflush(NULL);
			
            strcpy(copia, linha[l1-1]);
            strcpy(linha[l1-1], linha[l2-1]);
            strcpy(linha[l2-1], copia);

            quantLinha--;
            i = quantLinha;
        }

        if(linha[i][0] == 'r' && linha[i][1] == '\0') 
        {
            printf("Redigitar linha: ");
            scanf("%d", &l1);
            printf("  Linha %d >> ", l1);

            int c;
            while ( (c = getchar()) != '\n' && c != EOF ) { }
			
            fseek(stdin,0,SEEK_END);
			fgets(linha[l1-1], MAX_COLUNAS, stdin);
			
			for(int j = 0; linha[l1-1][j] != '\0'; j++)
           		if(linha[l1-1][j] == '\n')
                	linha[l1-1][j] = '\0';
			
            quantLinha--;
            i = quantLinha;
        }

        if(linha[i][0] == 's' && linha[i][1] == '\0') 
            break;

        quantLinha++;
    }
}

//todo:
// 1 - limitar o tamanho da linha 
// 2 - remover o '\n' da entrada
// 3 - controle de entrada de comandos



