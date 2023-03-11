#include <stdio.h>
#include <stdlib.h>

void option1() {
    int op;
    do {
        system("clear");
        printf("------- NEXUS -------\n");
        printf("[x] Option 1\n");
        printf("[4] Menu\n");
        scanf("%d", &op);

        switch(op) {
            case 4: 
                system("clear");
                
        }
    } while (op != 4);
}


void main() {
    FILE * fp = fopen("menu.txt", "r");
    char line[100];
    int i=0, option;
    system("clear");
    do{ 

        printf("------- NEXUS -------\n");
        printf("[1] Option 1\n");  
        printf("[2] Option 2\n");
        printf("[3] Option 3\n");
        printf("[4] Exit\n");
        
        //printf("\n");
        scanf("%d", &option);
        
        switch(option) {
            case 1: 
                system("clear");
                option1();
                break;  
            default:
                i = 1;
                break;
        }
    }while (i == 0);


}
