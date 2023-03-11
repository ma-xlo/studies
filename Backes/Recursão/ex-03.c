#include <stdio.h>

int sumCube(int n){
    
    if(n == 0) 
        return 0;
    else
        return (n*n*n) + sumCube(n - 1);

}

int main () {
    int n = 2;
    printf("%d\n", sumCube(n));
    return 0;
}