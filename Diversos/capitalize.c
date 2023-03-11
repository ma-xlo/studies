#include <stdio.h>
#include <string.h>


char *capitalize (char * input) {

    char *ptr = input;
    char *capitalized = input;

    *ptr = toupper(*ptr);
    while(*ptr != '\0') {
        ptr++;
        *ptr = tolower(*ptr);
    }

    return capitalized;  
}

int main() {
    // Write C code here

    char name[] = "marCeLO";   
 
    printf("%s\n", capitalize(name));

    return 0;
}
