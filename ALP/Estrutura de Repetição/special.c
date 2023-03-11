#include <stdio.h>

int main()
{

    float n, m, maior, menor;

    //entrada dos numeros
    do{
        printf("N = ");
        scanf("%f", &n);
            if(n <= 0)
                printf("Seu numero nao pode ser negativo.\n");
    }while (n <= 0);

    menor = n, maior = n;

    //leitura demais numeros
    while(n>0)
    {
        printf("N = ");
        scanf("%f", &n);
        if(n < 0)
            break;
        if (n < menor)
            menor = n;
        else if (n > maior)
            maior = n;
    }

    //resultado
    printf("Menor numero = %.2f\n", menor);
    printf("Maior numero = %.2f\n", maior);
    //printf("Media = %.2f", (maior + menor)/2);

}