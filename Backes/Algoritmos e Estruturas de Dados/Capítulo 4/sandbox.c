#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct lista Lista;

struct aluno {
    char nome[30];
    int matricula;
    float n1,n2,n3;
};

struct lista {
    int qtd;
    struct aluno dados[MAX];
};

Lista * createList() {
    Lista *li;

    li = (Lista*) malloc(sizeof(struct lista));

    if(li != NULL) 
        li->qtd = 0;
    
}

int tamanhoLista(Lista *lista) {
    if(lista != NULL)
        return -1;
    return lista->qtd;
}

int



int main () {



}