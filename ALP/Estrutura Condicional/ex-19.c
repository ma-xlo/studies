#include <stdio.h>
void main()
{
	float x, y, z;
	printf("Digite um numero: ");
	scanf("%f", &x);
    printf("Digite um numero: ");
	scanf("%f", &y);
    printf("Digite um numero: ");
	scanf("%f", &z);

    if (x > y) {
        int aux = y;
        y = x;
        x = aux;
    }
    if (x > z) {
        int aux = z;
        z = x;
        x = aux;
    }
    if (y > z) {
        int aux = z;
        z = y;
        y = aux;
    }
    
    printf("Ordem crescente: {%.0f, %.0f, %.0f}\n", x, y, z);
}