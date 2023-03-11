#include <stdio.h>

#define MAX_VALORES 5

int main(){
    float valores[MAX_VALORES], total=0, media, maiorValor, menorValor;
    int quantVal=0;
    
    for(int i = 0; i < MAX_VALORES; i++) {
        printf("Entre o %dº valor: ", i+1);
        scanf("%f", &valores[i]);
        total += valores[i];
        quantVal++;
    }
    
    // Definindo os valores extremos
    maiorValor = valores[0];
    menorValor = valores[0];
    for(int i = 1; i < quantVal; i++) {
        if(valores[i] > maiorValor)
            maiorValor = valores[i];
        if(valores[i] < menorValor)
            menorValor = valores[i];
    }

    // Calculo para a media
    media = total / quantVal;

    printf("+---------------------------+\n");
    printf("| Media: %18.1f |\n", media);
    printf("| Abaixo da media:          |\n");
    for(int i = 0; i < MAX_VALORES; i++) {
        if(valores[i] < media)
            printf("|  %dº valor:  %13.1f |\n", i+1, valores[i]);
    }
    printf("| Menor valor: %12.1f |\n", menorValor);
    printf("| Maior valor: %12.1f |\n", maiorValor);
    printf("+---------------------------+\n");
    return 0;

}