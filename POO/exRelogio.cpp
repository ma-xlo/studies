/*
Crie uma classe em C++ chamada Relogio para armazenar um hor�rio, composto por hora, minuto e segundo. A classe deve representar esses componentes de hor�rio e deve apresentar 
os m�todos descritos a seguir:
um m�todo chamado setHora, que deve receber o hor�rio desejado por par�metro (hora, minuto e segundo);
um m�todo chamado getHora para retornar o hor�rio atual, atrav�s de 3 vari�veis passadas por refer�ncia;
um m�todo para avan�ar o hor�rio para o pr�ximo segundo (lembre-se de atualizar o minuto e a hora, quando for o caso). 

*/
#include<iostream>

struct Relogio {
    int segundo;
    int minuto;
    int hora;

    void avancar (){
        if(this->segundo >= 59){
            this->minuto += 1;
            this->segundo = 0;

        }else
            this->segundo ++;
        if(this->minuto >= 59){
                
            this->hora += 1;
            this->minuto = 0;
       }
        if(this->hora >= 23)
            this->hora = 0;
    }

    void setHora (int aHora, int oMinuto, int oSegundo){
        this->hora = aHora;
        this->minuto = oMinuto;
        this->segundo = oSegundo;
    }

    void getHora (){
        std::cout<< this->hora<< ":" << this->minuto << ":" << this->segundo;
    }
};

int main(){
    struct Relogio r1;

    r1.setHora(23,59,59);
    r1.avancar();
    r1.getHora();
    return 0;
}