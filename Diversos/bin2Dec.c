#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char input[4] = "739";
    char binary[20];
    int num = atoi(input);
    int k = 15;

    for(int i = 0; i < 16; i++) binary[i] = '0';

    do {
        binary[k] = (num % 2) + '0';
        num /= 2;
        k--;
    } while(num != 0);  

    k = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) 
            printf("%c", binary[k]), k++;
        printf(" ");
    }

    printf("%s\n", binary);

    return 0;
}