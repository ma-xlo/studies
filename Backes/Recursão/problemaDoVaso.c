#include <stdio.h>

int esvaziaVaso(int *vaso) {
    if(*vaso > 0)
        return esvaziaVaso(vaso);
}

int main () {

    int floresDentroDoVaso = 5; 

    printf("%d", esvaziaVaso(&floresDentroDoVaso));
    
    return 0;
}