#include <stdio.h>

int main() { 

    long double a=1, c=0;

    for(int i = 0; i < 63; i++) {
        c=a*2;
        a=c;
    }

    printf("Numero de graos: %.0Lf\n", c);
    
}