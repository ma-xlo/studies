#include <iostream>
#include <math.h>


/*
5. Definir uma classe que represente um círculo.

Esta classe deve possuir métodos Privados para:
calcular a área do círculo;
calcular a distância entre os centros de 2 círculos;
calcular a circunferência do círculo.

E métodos Públicos para:
definir o raio do círculo, dado um número real;
aumentar o raio do círculo, dado um percentual de aumento;
definir o centro do círculo, dada uma posição (X,Y);

imprimir o valor do raio;
imprimir o centro do círculo.
imprimir a área do círculo.

Criar um programa principal para testar a classe
*/

struct Circulo{

    float area;
    float raio;
    float centro;
    float x, y;
    float circunferencia;

    //Entrada de dados
    void defineRaioReal(float oReal) {
        this->raio = oReal;
    }

    void aumentaRaioPercent(int oPercent) {
        this->raio = this->raio + (this->raio * oPercent/100);
    }

    void definePosix(float x, float y) {
        this->x = x;
        this->y = y;
    }

    //Calculo de dados
    void calcArea() {
        this->area = 3.14159265359 * pow(this->raio, 2);
    }

    void calcCircunferencia() {
        this->circunferencia = this->area * 2 * this->area;
    }

    void distCirculos() {

    }

    //Imprime dados
    void valorRaio() {
        std::cout << "Raio: "<< this->raio << std::endl;
    }

    void centroCirculo(float x, float y){
        std::cout << "Centro: " << x << ", " << y << std::endl;

    }

    void areaCirculo() {
        std::cout << "Area: "<< this->area << std::endl;
    }

};

int main() {

    struct Circulo c1, c2;

    c1.defineRaioReal(100);
    c1.aumentaRaioPercent(30);
    c1.calcArea();

    c1.valorRaio();
    c1.centroCirculo(15, 11);
    c1.areaCirculo();
}