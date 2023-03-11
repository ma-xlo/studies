#include <stdio.h>

int somatorium(int n){
    
    if(n == 0) return 0;

    return n + somatorium(n - 1);
}

int main () {
    int n = 3;
    printf("%d\n", somatorium(n));
    
    return 0;
}