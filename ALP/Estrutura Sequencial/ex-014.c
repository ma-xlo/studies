#include <stdio.h>

void main () {
    
    float distancia = 23.3, valorCombustivel = 5.80, custo;
    float consumoMedio = distancia / 12;

    custo = consumoMedio * valorCombustivel;
    printf("Custo da viagem: R$%.2f\n", custo);


}
