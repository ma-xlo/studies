#include <iostream>

class Costumer {
    private:
        std::string name;
        std::string address;
        int cardNumber;
        int pin;

    public: 
        Costumer(std::string name, std::string address, int cardNumber, int pin) {
            this->name = name;
            this->address = address;
            this->cardNumber = cardNumber;
            this->pin = pin;
        }

        
        void getCostumer(){
            std::cout << this->name << std::endl;
            std::cout << this->address << std::endl;
            std::cout << this->cardNumber << std::endl;
            std::cout << this->pin  << std::endl;
    }
};

int main() {

    Costumer *c1 = new Costumer("Marcelo", "Principe James II", 123456, 555);
    Costumer *c2 = new Costumer("Raul", "Avenida das flores", 654321, 666);

    c1->getCostumer();
    c2->getCostumer();

    return 0;
}