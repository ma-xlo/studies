#include <stdio.h>


int power (int b, int e) {
    if( e == 0 ) return 1;
    return b * power(b, e - 1); 
}

int main (void) {
    int n;

    printf("Square side: ");
    scanf("%d", &n);
    printf("Area: %d\n", power(n, 2));
    printf("Perimeter: %d\n", n*4);

}
