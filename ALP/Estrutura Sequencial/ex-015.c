  GNU nano 4.8                          hello.c                                    
#include <stdio.h>

void main() {
    float peso, altura, max, min;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    min = 20 * (altura * altura);
    max = 25 * (altura * altura);

    printf("Sua faixa de peso está entre: %.2f kg e %.2f kg\n", min, max);
    
    
}

