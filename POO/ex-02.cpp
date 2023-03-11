/* Crie uma classe denominada Elevador para armazenar as informações de um elevador dentro de um prédio. 
A classe deve armazenar o andar atual (0=térreo), total de andares no prédio, excluindo o térreo, capacidade do elevador, e quantas pessoas estão presentes nele.

A classe deve também disponibilizar os seguintes métodos:
inicializa: que deve receber como parâmetros: a capacidade do elevador e o total de andares no prédio (os elevadores sempre começam no térreo e vazios);
entra: para acrescentar uma pessoa no elevador (só deve acrescentar se ainda houver espaço);
sai: para remover uma pessoa do elevador (só deve remover se houver alguém dentro dele);
sobe: para subir um andar (não deve subir se já estiver no último andar);
desce: para descer um andar (não deve descer se já estiver no térreo); */

#include <iostream>

using namespace std;

struct Elevador
{
    int andar = 0;
    int total_andares;
    int capacidade;
    int quantidade_pessoas;

    void inicializa(int aCapacidade, int oTotal_andares)
    {
        this -> capacidade = aCapacidade;
        this -> total_andares = oTotal_andares;
    }

    void entra(int aQuantidade_pessoas)
    {
        if(aQuantidade_pessoas > this->capacidade){
            cout << "O elevador esta cheio." << endl;
        }
        else this -> quantidade_pessoas = aQuantidade_pessoas;
    }

    void sai(int aQuantidade_pessoas)
    {
        if(this -> quantidade_pessoas <= 0){
            cout << "O elevador esta vazio." << endl; 
        }
        else this -> quantidade_pessoas -= aQuantidade_pessoas;
    }

    void sobe(int oAndar)
    {
        if(oAndar > this -> total_andares){
            cout << "O elevador ja esta no ultimo andar" << endl;
        }
        else this -> andar += oAndar;
    }

    void desce(int oAndar)
    {
        if(this -> andar <= 0){
            cout << "O elevador ja esta no terreo" << endl;
        }
        else this -> andar -= oAndar;
    }
};

int main()
{
    struct Elevador servico;

    servico.inicializa(8,10);
    
    for(; ;) {
    servico.entra(5);
    servico.sai(3);
    servico.sobe(7);
    servico.desce(2);

    cout << "O elevador tem " << servico.quantidade_pessoas << " pessoas" << endl;
    cout << "O elevador esta no andar " << servico.andar << endl;
}