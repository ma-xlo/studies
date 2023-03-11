#include <iostream>

using namespace std;

void selectionSort(int *arr, int size){
    int aux;
    for (int i = 0; i < size; i++)
    {
        int min_index = i;

        for(int j = i+1; j < size; j++)
            if(arr[min_index] > arr[j])
                min_index = j;
        
        if(min_index != i) {
            aux = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = aux;
        }
    }
    
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++)
        cout<< arr[i]<<" ";
}

int main()
{
	int arr[] = {5, 2, 4, 1, 3};
	int size = sizeof(arr)/sizeof(arr[0]);
	
    selectionSort(arr, size);
	cout << "Sorted array: ";
    printArray(arr, size);

	return 0;
}
