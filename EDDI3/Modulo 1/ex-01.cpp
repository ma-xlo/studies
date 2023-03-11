#include <iostream>
#include <string>
#include <vector>

class Helpers {
    
public:
    void swap(float *a, float *b) {
        float aux;
        aux = *a;
        *a = *b;
        *b = aux;
    }

    void swap(std::string *a, std::string *b) {
        std::string aux;
        aux = *a;
        *a = *b;
        *b = aux;
    }
};

void printVector(std::vector <std::string> nomes, std::vector <float> salarios) {
    for(int i = 0; i < (int)salarios.size(); i++) {
        std::cout<<"Nome: "<<nomes[i]<<std::endl;
        std::cout<<"Salario: R$"<<salarios[i]<<std::endl<<std::endl;
    }    

}

void bubbleSort(std::vector <std::string> nomeFuncionarios, std::vector <float> salariosFuncionarios) {

    std::string nomeAux;
    Helpers helpers;

    for(int i = 0; i < (int)salariosFuncionarios.size() - 1; i++) {
        for(int j = 0; j < (int)salariosFuncionarios.size() - 1; j++) {
            if(salariosFuncionarios[j] > salariosFuncionarios[j+1]) {
                helpers.swap(&nomeFuncionarios[j], &nomeFuncionarios[j+1]);
                helpers.swap(&salariosFuncionarios[j], &salariosFuncionarios[j+1]);
            }
        }    
    }

    printVector(nomeFuncionarios, salariosFuncionarios);

}

void insertionSort(std::vector <std::string> nomeFuncionarios, std::vector <float> salariosFuncionarios) {

    for(int i = 1; i<=(int)salariosFuncionarios.size() - 1; i++) {
        int auxSalario = salariosFuncionarios[i];
        std::string auxNome = nomeFuncionarios[i];
        int j = i - 1;

        while(j >= 0 && salariosFuncionarios[j] < auxSalario) {
            salariosFuncionarios[j+1] = salariosFuncionarios[j];
            nomeFuncionarios[j+1] = nomeFuncionarios[j];
            j = j - 1;
        }
        salariosFuncionarios[j+1] = auxSalario;
        nomeFuncionarios[j+1] = auxNome;

    }

    printVector(nomeFuncionarios, salariosFuncionarios);
}

int main() {

    std::vector <std::string> funcionarios;
    std::vector <float> salariosFunc;
    std::string nomeFunc;
    float salarioFunc;

    while(true){
        
        std::cout<<"Nome: ";
        std::cin>>nomeFunc;
        if(nomeFunc == "0")
            break;
        std::cout<<"Salario: ";
        std::cin>>salarioFunc;

        std::cout<<std::endl;

        funcionarios.push_back(nomeFunc);
        salariosFunc.push_back(salarioFunc);

    }
    
    // std::cout<<"=========== Bubble Sort ================"<<std::endl<<std::endl;
    // std::cout<<"    * Ordem crescente de salario *"<<std::endl<<std::endl;
    // bubbleSort(funcionarios, salariosFunc);

    std::cout<<"========== Insertion Sort =============="<<std::endl<<std::endl;
    std::cout<<"   * Ordem decrescente de salario *"<<std::endl<<std::endl;
    insertionSort(funcionarios, salariosFunc);




    return 0;
}