#include <stdio.h>

#define CAPACIDADE_LIMITE 1

int main(){

    int idade=0, idadeVelho, idadeNovo, op,
        otimo, bom, regular, ruim, pessimo;

    for(int i = 0; i < 2; i++) {
        
        printf("Idade: ");
        scanf("%d", &idade);
        
        do {
            printf("Qual a sua avaliacao?\n");
            printf("[1] Otimo\n");
            printf("[2] Bom\n");
            printf("[3] Regular\n");
            printf("[4] Ruim\n");
            printf("[5] Pessimo\n");
            scanf("%d", &op);
        } while (op < 1 || op > 5);

        // switch (op) {
        //     case 1:
        //         otimo++;
        //         //break;
        //     case 2:
        //         bom++;
        //         //break;
        //     case 3:
        //         regular++;
        //         //break;
        //     case 4:
        //         ruim++;
        //         //break;
        //     case 5:
        //         pessimo++;
        //         //break;
        // }

    //     if(i = 0) {
    //         idadeNovo = idade;
    //         idadeVelho = idade;
    //     }
    //     if(idade > idadeVelho)
    //        idadeVelho = idade;
    //     else if (idade < idadeNovo)
    //        idadeNovo = idade;
    // }
    }
    printf("%d\n", otimo);
    printf("%d\n", idadeNovo);
    printf("%d\n", idadeVelho);

}