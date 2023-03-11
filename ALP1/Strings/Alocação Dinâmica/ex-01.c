#include <stdio.h>

#define MAX_CHAR 80

void main()
{
    char frase[MAX_CHAR];
    char contaChar;

    printf("Frase: ");
    gets(frase);

    for(int i = 0; frase[i] != '\0'; i++)
        contaChar++;
        
    printf("%d\n", contaChar);
}