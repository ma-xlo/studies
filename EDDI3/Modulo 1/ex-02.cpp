#include <iostream>
#include <algorithm>
#include <time.h>
#include <stdlib.h>

int * findSmallerNumber(int *arr, int size) {

    int smaller = arr[0];
    int frequency = 0;
    static int result[2];

    for (int i = 0; i < size; i++)
        (arr[i] == smaller) ? frequency++ : 0;
    
    result[0] = smaller;
    result[1] = frequency;

    return result;

}

int * findBiggerNumber(int *arr, int size) {
    int bigger = arr[size - 1];
    int frequency = 0;
    static int result[2];
    int count = 0;

    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == bigger) {
            frequency++;
        } 
        else {
            result[0] = bigger;
            result[1] = frequency;
            std::cout<< count<<std::endl;
            return result;
        }
    count++;
    }
    
    return result;
}

void printArr(int *arr, int size) {
    for (int i = 0; i < size; i++) 
        std::cout<< arr[i]<<" ";
    std::cout<<std::endl;
}

void bubbleSort (int *arr, int size) {
    int aux;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if(arr[j] > arr[j + 1]){
                aux = arr[j]; 
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
        
    }

}

int main() {
    srand(time(0));
    int arr[10];
    int size = sizeof(arr) / sizeof(arr[0]);
    int *tempArray;

    for (int i = 0; i < size-2; i++)
        arr[i] = 1 + (rand() % 10);
    arr[8] = 99;
    arr[9] = 99;

    bubbleSort(arr, size);
    std::cout<<"Sorted: ";
    printArr(arr, size);
    std::cout<<std::endl;

    tempArray = findSmallerNumber(arr, size);
    std::cout<<"Smaller value: "<< tempArray[0]<<std::endl;
    std::cout<<"Frequency: "<< tempArray[1]<<std::endl;

    std::cout<<std::endl;
    
    tempArray = findBiggerNumber(arr, size);
    std::cout<<"Bigger value: "<< tempArray[0]<<std::endl;
    std::cout<<"Frequency: "<< tempArray[1]<<std::endl;

    return 0;
}