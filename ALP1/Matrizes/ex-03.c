#include <stdio.h>

#define NUM_QUEST 10
#define MAX_ALUNOS 30
#define ASCII_a_DEC 97
#define NOTA_APROVACAO 6 


void main() {

    int numAlunos; 

    do {
        printf("- Alunos ---------------------\n");
        printf("Total de alunos: ");
        scanf("%d", &numAlunos);
        if(numAlunos > MAX_ALUNOS) {
            printf("Numero de alunos acima do permitido!\n");
            break;
        }

    } while (numAlunos > MAX_ALUNOS);

    char gabarito[10] = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'd', 'a', 'c'};
    char nota[numAlunos][NUM_QUEST];
    int matriculas[numAlunos], pontos[numAlunos];
    int aprovados = 0;

    for(int i = 0; i < numAlunos; i++) 
        pontos[i] = 0;

    printf("+-----------------------------+\n");
    printf("|          Matriculas         |\n");
    printf("+-----------------------------+\n");
    
    for(int i = 0; i < numAlunos; i++) {
        printf("Aluno %d: ", i+1);
        scanf("%d", &matriculas[i]);
    }
    printf("\n");


    for(int i = 0; i < numAlunos; i++) {
        printf("+- Questoes -----------------+\n");
        printf("|           Aluno %d          |\n", i+1);
        printf("+----------------------------+\n");
        for(int j = 0; j < NUM_QUEST; j++) {
                do{
                    printf("Questao %d: ", j+1);
                    scanf(" %c", &nota[i][j]);
                    if(nota[i][j] < ASCII_a_DEC || nota[i][j] > 101)
                        printf("Nota invalida!\n");
                } while (nota[i][j] < ASCII_a_DEC || nota[i][j] > 101);
        }
    }
    
    for(int i = 0; i < numAlunos; i++) {
        for(int j = 0; j < NUM_QUEST; j++)
            if(nota[i][j] == gabarito[j]) 
                pontos[i] += 1;
            else 
                pontos[i] += 0;
    }

    for(int i = 0; i < numAlunos; i++) {
        if(pontos[i] >= NOTA_APROVACAO)
            aprovados++; 
    }

    printf("+--------------+-------------+\n");
    printf("|   Matricula  |     Nota    |\n");
    printf("+--------------+-------------+\n");

    for(int i = 0; i < numAlunos; i++) 
        printf("| %12d | %11d |\n", matriculas[i], pontos[i]);
        
    float resultado = ((float)aprovados / (float)numAlunos) * 100;
    printf("+--------------+-------------+\n");
    if(resultado == 100)
        printf("|      Aprovados %.0f%%%-5c |\n", resultado, ' ');
    else
        printf("|      Aprovados %.1f%%%-5c |\n", resultado, ' ');
    printf("+----------------------------+\n");
    
}