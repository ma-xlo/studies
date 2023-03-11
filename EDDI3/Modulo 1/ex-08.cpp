#include <iostream>
#include <vector>

using namespace std;

struct Imobiliaria {
    int codigo;
    string bairro;
    float area;
    float valorVenda;
    float valorAluguel;
}; 

void insertionSort(vector <Imobiliaria> &imobiliaria) {
    for(int i = 1; i < (int)imobiliaria.size(); i++){
        float eleito = imobiliaria[i].valorVenda;
        Imobiliaria casa = imobiliaria[i];
        int j = i - 1;

        while(j >= 0 && imobiliaria[j].valorVenda > eleito) {
            imobiliaria[j + 1] = imobiliaria[j];
            j--;
        }
        imobiliaria[j+1] = casa;
    }
}

void bubbleSort(vector <Imobiliaria> &imobiliaria){
    int i, continuar, fim = imobiliaria.size();
    Imobiliaria casa;
    do {
        continuar = 0;
        for(i = 0; i < fim - 1; i++) {
            if(imobiliaria[i].valorVenda > imobiliaria[i + 1].valorVenda) {
                casa = imobiliaria[i];
                imobiliaria[i] = imobiliaria[i+1];
                imobiliaria[i + 1] = casa;
                continuar = i;
            }
        }
        fim--;  

    }while(continuar != 0);

}

int main () {

    vector <Imobiliaria> imobiliaria = {
        {333333, "Rua dos Galhos, Nº225", 24, 666666, 900},
        {111111, "Rua das Flores, Nº122", 15, 222222, 800},
        {444444, "Rua das Tulipas, Nº322", 57, 888888, 1100},
        {222222, "Rua das Pedras, Nº135", 33, 444444, 1500},
        {555555, "Rua do Rochedo, Nº132", 40, 1200, 1300}
    };

    //bubbleSort(imobiliaria);
    insertionSort(imobiliaria);

    for(int i = 0; i < (int) imobiliaria.size(); i++) {
        cout<<"=============== CASA "<<i+1<<" ==============="<<endl;
        cout<<"Codigo: "<<imobiliaria[i].codigo<<endl;
        cout<<"Endereco: "<<imobiliaria[i].bairro<<endl;
        cout<<"Area: "<<imobiliaria[i].area<<"m²"<<endl;
        cout<<"Aluguel: "<<imobiliaria[i].valorAluguel<<endl;
        cout<<"Preço: "<<imobiliaria[i].valorVenda<<endl<<endl;

    }

    return 0;
}