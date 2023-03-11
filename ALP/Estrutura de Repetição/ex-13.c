#include <stdio.h>

//#define INICIO 50
#define FIM 150
#define R 5

int main(){
    float INICIO = 50;
    printf("+-------------------------------------+\n");
    printf("|           Conversor de Graus        |\n");
    printf("+-------------------------------------+\n");
    for(INICIO; INICIO <= FIM; INICIO += R){
        printf("| Fahrenheit:%4.0f°F | Celsius:%5.1fC° |\n",
            INICIO, 5*(INICIO-32)/9.0);
    }
    printf("+-------------------------------------+\n");
}