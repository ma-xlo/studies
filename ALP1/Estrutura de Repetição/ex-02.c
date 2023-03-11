#include <stdio.h>

int main() {
    int  quantNum = 0; 
    float total = 0, n = 0, maior, menor;

    while (1) {
        printf("Digite um numero: ", n);
        scanf("%f", &n);
        if(n < 0) 
            break;
        if(quantNum == 0)
            maior = n, menor = n;
        
        if(n < menor)
            menor = n;
        else if(n > maior)
            maior = n;

        quantNum++;
        total += n;
    }
    
    printf("Media: %.1f\n", total / quantNum);
    printf("Maior: %.0f Menor: %.0f\n", maior, menor);

    return 0;
}
