//Fazer um programa em C que pergunta um valor em metros e imprime o
//correspondente em decímetros, centímetros e milímetros.
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    
    float num, d, c, m;
    
    system("clear");

    printf("-------------------------------------------\n");
    printf("|           Conversor de Medidas          |\n");
    printf("-------------------------------------------\n");
    
    printf("Digite um valor em metros: ");
    scanf("%f", &num);
    
    d = num * 10;
    c = num * 100;
    m = num * 1000;

    printf("\nDecimetros: %.0f\nCentimetros: %.0f\nMilimetros: %.0f\n\n", d, c, m); 

}

