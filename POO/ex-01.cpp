#include <iostream>

// Crie uma classe para representar uma pessoa, com os atributos privados de nome, idade e altura
//. Crie os métodos públicos  necessários para
//sets e gets e também um métodos para imprimir os dados de uma pessoa. 

struct Pessoa {
    std::string nome;
    int idade;
    float altura;


    void preenche () {
        std::cout << "Nome: ";
        std::getline(std::cin, nome);

        std::cout << "Altura: ";
        std::cin >> this->altura;

        std::cout << "Idade: ";
        std::cin >> this->idade;
    }

    void imprime() {
        std::cout << this->nome << std::endl;
        std::cout << this->idade << std::endl;
        std::cout << this->altura << std::endl;
    }
};

int main() {

    struct Pessoa p1;

    p1.preenche();
    p1.imprime();

    return 0;

}


