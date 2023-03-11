/*
Uma data pode ser descrita por três números inteiros, para armazenar o dia, o mês e 
o ano:  
a. Crie uma estrutura chamada Data para armazenar datas com esses campos.  
b. Faça  um  programa  que  leia  um  vetor  de  5  datas  do  teclado  e  imprima  o 
resultado
*/

#include <iostream>

const int MAX_DATA = 2;

using namespace std;

typedef struct Data {
    int dia;
    int mes;
    int ano;
} Data;

void lerDados(Data * data) {
    int i;

    for(i = 0; i < MAX_DATA; i++) {
        cout << endl << "Data" << i+1 << endl;
        do {
            cout << "Dia: ";
            cin >> data[i].dia; 
        } while (data[i].dia < 1 || data[i].dia > 31);

        do {
            cout << "Mes: ";
            cin >> data[i].mes; 
        } while (data[i].mes < 1 || data[i].mes > 12);

        do {
            cout << "Ano: ";
            cin >> data[i].ano; 
        } while (data[i].ano < 1930 || data[i].ano > 2022);

    }
}

void imprimeDados(Data * data) {
    int i;

    cout << endl << "===========================" << endl;
    for(i = 0; i < MAX_DATA; i++) 
        cout << endl << "Data: " << i+1 << data[i].dia << "/" << data[i].mes << "/" << data[i].ano << endl; 
}

int main () {

    Data datas[MAX_DATA];
    system("clear");
    lerDados(datas);
    imprimeDados(datas);


    return 0;

}
