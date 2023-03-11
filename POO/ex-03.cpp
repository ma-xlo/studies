#include <iostream>>
#include <iomanip>


struct Relogio {
    int hora;
    int min;
    int seg;

    void setHora(int hora, int min, int seg) {
        this->hora = hora;
        this->min = min;
        this->seg = seg;
    }

    void getHora() {
        
        std::cout << std::setfill('0') << std::setw(2) << this->hora << ":";
        std::cout << std::setfill('0') << std::setw(2) << this->min << ":";
        std::cout << std::setfill('0') << std::setw(2) << this->seg << std::endl;
    }

    void avancar() {
        if(this->seg < 59) {
            this->seg ++;
        }
        else {
            this->min += 1;
            this->seg = 0;
        }

        if(this->min == 59) {
            this->hora += 1;
            this->min = 0;
        }
    }

};

int main() {

    struct Relogio cuco;

    cuco.setHora(15, 8, 58);

    for(; ;) {
        cuco.getHora();
        cuco.avancar();
        system("sleep 1");
        system("clear");
    }
}