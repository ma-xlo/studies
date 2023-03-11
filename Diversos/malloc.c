#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
    char *firstName, input[50];


    printf("Name: ");
    fgets(input, 50, stdin);
    scanf("%*[^\n]");scanf("%*c");

    firstName = malloc(strlen(input) * sizeof(char));
    strcpy(firstName, input);
    
    printf("Input: %s\tSize: %d\n", firstName, strlen(firstName));
    
    free(firstName);
    return 0;
}