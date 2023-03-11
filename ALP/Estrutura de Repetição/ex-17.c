#include <stdio.h>

int main() { 

    float soma, num=450.f;
    for(int i=10; i<30;i++) {
        soma += num/i;
        printf("%.2f\n", soma); 
    }

    return 0;
}