#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

/*
    Faça um programa que cadastre 12 produtos. Para cada produto devem ser
cadastrados os seguintes dados: código, descrição e preço. Use um método de
ordenação e em seguida calcule e mostre quantas comparações devem ser feitas
para encontrar um funcionário pelo código:
a. Usando busca sequencial.
b. Usando busca binária.
*/

struct Product {
    int productId;
    string productDescription;
    float productPrice;
};

void insertionSort (vector<Product> &productsDatabases) {
    for(int i = 1; i < productsDatabases.size(); i++) {
        int unsorted = productsDatabases[i].productId;
        Product productUnsorted = productsDatabases[i];
        int j = i - 1;

        while(j >= 0 && productsDatabases[j].productId > unsorted){
            productsDatabases[j + 1] = productsDatabases[j]; 
            j--;
        }
        productsDatabases[j + 1] = productUnsorted;
    }
}

int binarySearch(vector<Product> productDatabases, int low, int high, int target, int *operations) {

    while(high >= low) {
        int mid = low + (high - low) / 2;
        *operations = *operations + 1;

        if(productDatabases[mid].productId == target)
            return mid;
        else if(productDatabases[mid].productId < target)
            low = mid + 1;
        else    
            high = mid - 1;
    }

    return -1;

}

int linearSearch(vector <Product> productDatabases, int size, int target, int *operations) {
    for(int i = 0; i < size; i++) {
        *operations = *operations + 1;
        if (target == productDatabases[i].productId)
            return i;
        else if(target < productDatabases[i].productId)
            return -1;
    }
}


int main() {

    vector <Product> productsDatabases = {
        {555555, "Lorem ipsum dolor sit amet, consectetur adipiscing elit", 1200.90},
        {111111, "Lorem ipsum dolor sit amet, consectetur adipiscing elit", 1535.90},
        {888888, "Lorem ipsum dolor sit amet, consectetur adipiscing elit", 1123.90},
        {444444, "Lorem ipsum dolor sit amet, consectetur adipiscing elit", 1123.90},
        {777777, "Lorem ipsum dolor sit amet, consectetur adipiscing elit", 3123.90},
        {121212, "Lorem ipsum dolor sit amet, consectetur adipiscing elit", 7523.90},
        {999999, "Lorem ipsum dolor sit amet, consectetur adipiscing elit", 4123.90},
        {222222, "Lorem ipsum dolor sit amet, consectetur adipiscing elit", 1423.90},
        {666666, "Lorem ipsum dolor sit amet, consectetur adipiscing elit", 1223.90},
        {333333, "Lorem ipsum dolor sit amet, consectetur adipiscing elit", 2823.90},
        {101010, "Lorem ipsum dolor sit amet, consectetur adipiscing elit", 5723.90},
        {131313, "Lorem ipsum dolor sit amet, consectetur adipiscing elit", 8153.90},
        {151515, "Lorem ipsum dolor sit amet, consectetur adipiscing elit", 9133.90},
    };
    int size = productsDatabases.size();
    int target, operationsBin=0, operationsLin=0;

    insertionSort(productsDatabases);

    cout<<"+-------------+---------------------------------------------------------+------------+"<<endl;
    cout<<"| Product ID  | Description                                             | Price      |"<<endl;
    cout<<"+-------------+---------------------------------------------------------+------------+"<<endl;

    for (int i = 0; i < (int) productsDatabases.size(); i++)
    {
        cout<<"| "<<productsDatabases[i].productId<<"      | "<<productsDatabases[i].productDescription<<" | "<<productsDatabases[i].productPrice<<"     |"<<endl; 
    }
    cout<<"+-------------+---------------------------------------------------------+------------+"<<endl;
    
    cout<<"Search: ";
    cin>>target;
    cout<<endl;

    int searchResult = binarySearch(productsDatabases, 0, size - 1, target, &operationsBin);
    linearSearch(productsDatabases, size, target, &operationsLin);


    cout<<"Search result:"<<endl;
    if(searchResult == -1)
        cout<<"Product not found!"<<endl<<endl;
    else
        cout<<"ID: "<<productsDatabases[searchResult].productId<<"\tDescription: "<<productsDatabases[searchResult].productDescription<<"\tPrice: "<<productsDatabases[searchResult].productPrice<<"\t"<<endl<<endl; 

    cout<<"Number of Operations:"<<endl;
    cout<<"Binary Search: "<<operationsBin<<endl;
    cout<<"Linear Search: "<<operationsLin<<endl;
}