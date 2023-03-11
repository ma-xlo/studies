#include <stdio.h>

int power(int k ,int n){
    
    if(n == 0) 
        return 1;
    else
        return k * power(k, n - 1);
}

int main () {
    printf("%d\n", power(2, 4));
    return 0;
}