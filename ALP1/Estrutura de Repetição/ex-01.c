#include <stdio.h>

#define MAX_NOTAS 4

int main() {
  
//1 - pegar notas do aluno
//2 - fazer a media
//3 - Não devem ser permitidas entradas de notas maiores que 10 ou menores que 0.	

    float nota, soma = 0, media;
    int termos;

    for(termos = 0; termos < 4; termos++) {

        while(1) {
         
            printf("Nota %d: ", termos + 1);
            scanf("%f", &nota);

            if(nota >= 0 && nota <= 10)
                break;
        }

        soma = soma + nota;

    }

    media = soma / termos; 

    printf("Soma: %f\n", soma);
    printf("Media: %f\n",media);


	
	
	
}