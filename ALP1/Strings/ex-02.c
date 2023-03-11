#include <stdio.h>

#define MAX_CHAR 100

void main()
{
    char frase[MAX_CHAR], fraseCodificada[MAX_CHAR];

    printf("Frase: ");
    gets(frase);

    printf("+------------------------------+\n");
    printf("|     Letra    |  Codificacao  |\n");
    printf("+--------------+---------------+\n");

    for(int i = 0; frase[i] != '\0'; i++) {

        if(frase[i] % 2 != 0 ) {
            printf("| %3c - %-4d   | %4c - %-6d |\n", frase[i], frase[i], frase[i] / 2, frase[i] / 2);
            frase[i] = frase[i] / 2;

        }
        else if(frase[i] % 2 == 0) {
            printf("| %3c - %-4d   | %4c - %-6d |\n", frase[i], frase[i], frase[i] - 3, frase[i] - 3);
            frase[i] = frase[i] - 3;
        }
    }
    printf("+------------------------------+\n");
    printf(" Frase codificada: %s\n", frase);

}