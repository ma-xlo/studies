#include <stdio.h>
#include <ctype.h>

#define MAX_CHAR 80

void main()
{
    char frase[MAX_CHAR], fraseCodificada[MAX_CHAR];

    printf("Frase: ");
    gets(frase);

    for(int i = 0; frase[i] != '\0'; i++) {
        if(frase[i] == ' ') 
            frase[i] = '-';
        
        if(frase[i] >= 64 && frase [i] <= 90) 
            frase[i] = tolower(frase[i]);
        else if(frase[i] >= 97 && frase [i] <= 122) 
            frase[i] = toupper(frase[i]);
    }
    
    printf("Frase modificada: %s\n", frase);

}