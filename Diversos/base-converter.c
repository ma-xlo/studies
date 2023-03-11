#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * bin2Dec (char * input, int length) {
    char *binary = malloc(sizeof(input));
    int num = atoi(input);
    int k = 15;
    if(input[0] != '0') {
        for(int i = 0; i < 16; i++) binary[i] = '0';
    } 

    do {
        binary[k] = (num % 2) + '0';
        num /= 2;
        k--;
    } while(num != 0);  

    return binary;
}

int main() {

    char input[16];

    int length;

    length = strlen(input);
    while(strcmp(input, "exit") != 0) {
            system("clear || cls");
            printf("+----------------------------------------------+\n");
            printf("| System       | Base   |       Converted      |\n");
            printf("+--------------+--------+----------------------+\n");
            printf("| Binary       | (n)₂   | %20s |\n", bin2Dec(input, length));
            printf("| Octal        | (n)₈   | %20o |\n", atoi(input));
            printf("| Decimal      | (n)₁₀  | %20d |\n", atoi(input));
            printf("| Hexadecimal  | (n)₁₆  | %20X |\n", atoi(input));
            printf("+--------------+--------+----------------------+\n");
            printf(" Input: ");
            gets(input);
    }

    exit(EXIT_SUCCESS);
}
