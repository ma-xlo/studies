#include <stdio.h>
#include <string.h>

void halfPyramid(int n) {
    char tile[n];
    tile[0] = '|';
    
    for(int i = 0; i < n; i++) {
        printf("%s\n", tile);
        strcat(tile, "|");
    }
}

int main () {
    halfPyramid(5);
    return 0;
}