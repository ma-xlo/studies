#include <stdio.h>
void main() {
    
    int contador=0, id, id_menorPeso=0, id_maiorPeso=0;
    float peso=0, totalDePeso=0, menorPeso=0, maiorPeso=0;

    do {
        printf("ID: ");
        scanf("%d", &id);
        if(id < 0) 
            break;
        printf("Peso: ");
        scanf("%f", &peso);

        if (contador == 0) 
            menorPeso = peso, maiorPeso = peso;

        if(peso > maiorPeso) { 
            id_maiorPeso = id;
            maiorPeso = peso;

        } else if (peso <= menorPeso) {
            id_menorPeso = id;
            menorPeso = peso;
        }
        totalDePeso += peso;
        contador++;

    } while(1);

    printf("+-------------🐮 BOI CONTROL 🐮-------------+\n");
    printf("|Menor peso: %8.1ft  Identificacao: %5d|\n", menorPeso, id_menorPeso);
    printf("|Maior peso: %8.1ft  Identificacao: %5d|\n", maiorPeso, id_maiorPeso);
    printf("+-------------------------------------------+\n");
    printf("|Total de Peso: %27.1ft|\n", totalDePeso);
    printf("+-------------------------------------------+\n");

}