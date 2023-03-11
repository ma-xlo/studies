#include <stdio.h>
#include <stdlib.h>

#ifndef MAX
#define MAX 10
#endif

int main(int argc, char const *argv[]) {

    char *moedas[5] = {"Dolar", "Euro", "Libra", "Iene", "Yuan"};
    char *siglas[5] = {"USD", "EUR", "GBP", "JPY", "CNY"};
    float cot[5] = {4.80, 5.19, 6.16, 0.74, 0.037,};
    float entrada = 1;
    char space = ' ';


    while(1) {
        system("clear");

        printf("+-----------------------------------+\n");
        printf("| Moeda |  Sigla  |      Valor      |\n");
        printf("+-----------------------------------+\n");
        for(int i = 0; i < 5; i++) {
            printf("| %-5s |   %-5s | R$%13.2f |\n", 
                moedas[i], siglas[i], entrada*cot[i]);
            printf("+-----------------------------------+\n");

        }
        printf("  Valor: ");
        scanf("%f", &entrada);
    }



    exit(EXIT_SUCCESS);
}
