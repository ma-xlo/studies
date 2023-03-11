#include<iostream>
#include <string.h>

using namespace std;

int countWords(string quote, int size){

    if(size == 0)
        return 1;

    if(quote[size - 1] == ' ') 
        return 1 + countWords(quote, size - 1);

    return countWords(quote, size - 1);
}


int main()
{
    
    string quote = "Algoritmos e Estrutura de dados";
    int size = quote.length();

    cout<<"Words: "<<countWords(quote, size)<<endl;

    return 0;
}