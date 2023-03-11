#include <stdio.h>
#include <string.h>


int main (void) {
    system("clear");
    char header[3][30] = {"TODO", "Arrumar a cama", "calopsita"};

    // loop to define the greatest string in the array
    int header_size = strlen(header[1]) + 4;

    for (int i = 0; i <= header_size; i++) {
        if (i == 0 || i == header_size) printf("+");
        else printf("-");
    }
    printf("\n");
    for(int i = 0; i <= header_size; i++) {
        if (i == 0 || i == header_size) printf("|");
        if (i == 1) printf(" ");
        if (i == 2) printf("%s", header[0]);
        if (i > strlen(header[1])) printf(" ");
    }
    printf("\n");
    for (int i = 0; i <= header_size; i++) {
        if (i == 0 || i == header_size) printf("+");
        else printf("-");
    }
    printf("\n");

        for(int i = 0; i <= header_size; i++) {
        if (i == 0 || i == header_size) printf("|");
        if (i == 1) printf(" ");
        if (i == 2) printf("%s", header[1]);
        if (i > strlen(header[1]) + 1) printf(" ");
    }
    printf("\n");





}
