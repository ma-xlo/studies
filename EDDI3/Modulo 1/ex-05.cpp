#include <iostream>
#include <time.h>
#include <stdlib.h>

#define MATRIX_SIZE 4

using namespace std;


void insertionSort(int matrix[MATRIX_SIZE][MATRIX_SIZE], int size) {

    int auxVector[MATRIX_SIZE * MATRIX_SIZE];
    int auxIndex = 0;

    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            auxVector[auxIndex] = matrix[i][j];
            auxIndex++;
        }
    }

    for (int i = 1; i < size*size; i++) {
        int key = auxVector[i];
        int j = i - 1;
        while(j >= 0 && auxVector[j] > key) {
            auxVector[j+1] = auxVector[j];
            j--;
        }
        auxVector[j+1] = key;
    }

    auxIndex = 0;

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++) {
            matrix[i][j] = auxVector[auxIndex];
            auxIndex++;
        }
    }
}

void selectionSort(int matrix[MATRIX_SIZE][MATRIX_SIZE], int size) {

    int auxVector[MATRIX_SIZE * MATRIX_SIZE];
    int auxIndex = 0;

    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            auxVector[auxIndex] = matrix[i][j];
            auxIndex++;
        }
    }

    for (int i = 0; i < size*size; i++) {
        int aux;
        int min_index = i;
        for(int j = i+1; j < size*size; j++) 
            if(auxVector[min_index] < auxVector[j])
                min_index = j;
        

        if(min_index != i){
            aux = auxVector[min_index];
            auxVector[min_index] = auxVector[i];
            auxVector[i] = aux;
        }
    }

    auxIndex = 0;

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++) {
            matrix[i][j] = auxVector[auxIndex];
            auxIndex++;
        }
    }
}

void populateMatrix(int matrix[MATRIX_SIZE][MATRIX_SIZE]) {
    for (int i = 0; i < MATRIX_SIZE; i++)
        for (int j = 0; j < MATRIX_SIZE; j++) 
            matrix[i][j] = 1 + (rand() % 10);
}


int main() {

    srand(time(0));
    int matrix[MATRIX_SIZE][MATRIX_SIZE];
    int size = sizeof(matrix[0]) / sizeof(int);
    
    populateMatrix(matrix);

    insertionSort(matrix, size);
    cout<<"Ascending order sorted matrix:"<<endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            cout<< matrix[i][j] << "\t";

        cout<<endl;
    }
    
    cout<<endl;

    selectionSort(matrix, size);
    cout<<"Descending order sorted matrix:"<<endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            cout<< matrix[i][j] << "\t";

        cout<<endl;
    }
    return 0;
}