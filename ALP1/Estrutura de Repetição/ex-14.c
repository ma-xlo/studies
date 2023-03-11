#include <stdio.h>

#define phi 3.141592

int main(){
    float v;
    printf("+-------------------------------------+\n");
    printf("|           Tabela de Volumes         |\n");
    printf("+-------------------------------------+\n");
    for(float r = 0.5; r <= 15; r+=0.5){
        v = (4/3.f)*phi*(r*r*r);
        printf("| Raio:%5.1fcm   Volume:%9.2f cm³ |\n", r, v);
    }
    printf("+-------------------------------------+\n");
}