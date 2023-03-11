#include <stdio.h>

int main() {

    int y=10, x=10, *px, *py;
    py = &y;
    px = &x;

    printf("px: %p\npy: %p\n", px, py);

    px > py ? printf("px is greater!\n") : printf("py is greater!\n");
    

    
    return 0;
    

}