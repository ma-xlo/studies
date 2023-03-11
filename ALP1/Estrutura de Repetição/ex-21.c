#include <stdio.h>
#include <math.h>

int main() { 

    int mod, div, result;  
    printf("Numeros: ");
    for(int num = 1000; num <= 9999; num++) {
        mod = num % 100;
        div = num / 100;

        if(pow(mod+div, 2) == num)
            printf("%d, ", num);
    }

    return 0;

}