#include <iostream>

using namespace std;

int pesquisaLR(float *array, int size, float target) {
    
    if(array[size - 1] == target)
        return size - 1;
    
    if(size == 0)
        return - 1;
        
    return pesquisaLR(array, size - 1, target);
}

int main() {

    float array[5] = {1, 5, 3, 4, 2};
    int size = sizeof(array) / sizeof(float);

    int query = pesquisaLR(array, size, 56);

    if(query >= 0)
        cout<<"Indice do valor: "<<query<<endl; 
    else
        cout<<"Valor não encontrado :("<<endl; 

    return 0;
}