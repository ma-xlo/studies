#include <stdio.h>
#include <math.h>
#define PI 3.14159265

void main () {

    float r, volume;

    printf("Digite o valor do raio: ");
    scanf("%f", &r);

    volume = (4*PI*pow(r, 3))/3;
    printf("Volume: %.1f\n", volume);

}