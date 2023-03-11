#include <stdio.h>

int main() { 

    float acumulador, idade;
    int contador=0;

    do {
        printf("Digite a idade %d: ", contador+1);
        scanf("%f", &idade);
        if(idade < 0) {
            printf("Idade inválida!\n");
            continue;
        }

        acumulador += idade;
        if (idade != 0) contador++;
    
    } while (idade != 0);
    
    printf("%d\n", contador);
    printf("Media: %.1f anos\n", acumulador / contador);
    
}