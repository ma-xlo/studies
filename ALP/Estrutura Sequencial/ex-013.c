#include <stdio.h>

void main () {
    
    float consumo, distancia, media;

    printf("Distancia percorrida: ");
    scanf("%d", &distancia);
    printf("Combustivel consumido: ");
    scanf("%d", &consumo);

    media = distancia / consumo;

    printf("Media: %.1f km/l\n", media);
}
