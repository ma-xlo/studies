#include <stdio.h>

#define MASSA_MINIMA 0.5

int main() { 

    float massaInicial, seg=50;
 
    printf("Massa(g): ");
    scanf("%f", &massaInicial);

    for(int i = 1;massaInicial >= MASSA_MINIMA; i++) {
        massaInicial /= 2;
        seg *= i;
    }

    if(seg < 60)
        printf("Tempo: %.0f seg\n", seg);
    else if (seg > 60 && seg < 3600)
        printf("Tempo: %.1f min\n", seg/60);
    else 
        printf("Tempo: %.0fh\n", seg/60);
}
