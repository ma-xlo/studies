#include <stdio.h>

int fatorialDuplo(int n) {

    if(n == 1)
        return 1;
    
    return n * fatorialDuplo(n-2);

}

int main(){

    printf("%d", fatorialDuplo(5));
    

    return 0;
}