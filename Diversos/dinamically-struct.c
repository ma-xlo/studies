#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_SIZE 255

typedef struct {
        char * name;
        char * phone;
        char * email;
    } person;

void newEntries( char **members) {

    char * sections[3] = {"Name", "Phone", "Email"};
    char input[MAX_INPUT_SIZE];
    
    for(int i = 0; i < 3; i++) {
        printf("%s: ", sections[i]);
        gets(input);
        members[i] = malloc(sizeof(input));
        strcpy(members[i], input);
    }
}

void readEntries(char **members, int length) {
    system("clear");
    for(int i = 0; i < length; i++) {
        printf("%s\n", members[i]);    

    }
}

int main (void) { 

    person * user = malloc(sizeof(person));
    char * members[3] = {user->name, user->phone, user->email};
    
    newEntries(&members);
    readEntries(members, 3);


    for(int i = 0; i < 3; i++) free(members[i]);
    free(user);   

}