#include <stdio.h>

#define V_PREVISTOS 6

int main() { 
    int max_lugares = 1;
    int listaVoos[] = {727, 442, 331, 447, 221, 291};
    int lugaresDisp[] = {
        max_lugares, max_lugares, max_lugares,
        max_lugares, max_lugares, max_lugares
    };
    int voo, op;
    
    // Menu
    while(op != 4) {
        printf("[1] Listar voos\n");
        printf("[2] Fazer reserva\n");
        printf("[3] Cancelar reserva\n");
        printf("[4] Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("+------------- Voos Previstos -------------+\n");
            printf("|");
            printf("    ");
            for (int i = 0; i < V_PREVISTOS; i++) 
                printf("[%d] ", listaVoos[i]);
            printf("  |");
            printf("\n");
            printf("+------------------------------------------+\n");
            break;
        case 2:
            printf("+------------ Reserva de voos ------------+\n");
            printf("| VOOS  |         Diponibilidade          |\n");
            printf("+-----------------------------------------+\n");
            for (int i = 0; i < V_PREVISTOS; i++) {
                printf("| [%d] | %31d |\n", listaVoos[i], lugaresDisp[i]);
            }
            printf("+-----------------------------------------+\n");
            printf("Opcao de voo: ");
            scanf("%d", &voo);
            for(int i = 0; i < V_PREVISTOS; i++) {
                if(voo == listaVoos[i] && lugaresDisp[i] > 0){
                    lugaresDisp[i]--;
                    printf("      +----------------------------+\n");
                    printf("      | Reserva feita com sucesso! |\n");
                    printf("      +----------------------------+\n");
                    break;
                } else if(lugaresDisp[i] == 0){
                    printf("       +----------------------------+\n");
                    printf("       |     Lugares Esgotados!     |\n");
                    printf("       +----------------------------+\n");
                    break;
                }
            }
            break;
        case 3:
            printf("+------------ Selecione um voo ------------+\n");
            printf("|");
            printf("    ");
            for (int i = 0; i < V_PREVISTOS; i++) 
                printf("[%d] ", listaVoos[i]);
            printf("  |");
            printf("\n");
            printf("+------------------------------------------+\n");
            printf("Voo a cancelar: ");
            scanf(" %d", &voo);
            for(int i = 0; i < V_PREVISTOS; i++) {
                    if(voo == listaVoos[i] && lugaresDisp[i] < max_lugares){
                        lugaresDisp[i]++;
                        printf("     +--------------------------------+\n");
                        printf("     | Reserva cancelada com sucesso! |\n");
                        printf("     +--------------------------------+\n");
                        break;
                    } else if (voo == listaVoos[i] && lugaresDisp[i] == max_lugares){
                        printf("     +--------------------------------+\n");
                        printf("     |       Reserva inexistente!     |\n");
                        printf("     +--------------------------------+\n");
                        break;
                    }
            }
            break;
        default:
            break;
        }
    }
    return 0;
}