#include <stdio.h>

int main() { 

    int count=0;
    char frase[100];

    printf("Digite uma frase: ");
    gets(frase);

    for(int i = 0; frase[i] != '\0'; i++) {
        if(frase[i] == ' ' || frase[i] == '\t')
            continue;
        count++;
    }
    printf("N° de caracteres: %d\n", count);

}