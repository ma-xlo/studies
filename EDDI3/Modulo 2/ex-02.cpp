#include <iostream>

using namespace std;

// Sort the array in ascending order.
// Set the low index to the first element of the array and the high index to the last element.
// Set the middle index to the average of the low and high indices.
// If the element at the middle index is the target element, return the middle index.
// If the target element is less than the element at the middle index, set the high index to the middle index – 1.
// If the target element is greater than the element at the middle index, set the low index to the middle index + 1.
// Repeat steps 3-6 until the element is found or it is clear that the element is not present in the array.

void insertionSort(float *array, int size) {
    for(int i = 1; i < size; i++){
        float unsorted = array[i];
        int j = i - 1;
        while(j >= 0 && array[j] > unsorted) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = unsorted;
    }
}

int pesquisaBR(float arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return pesquisaBR(arr, l, mid - 1, x);
        return pesquisaBR(arr, mid + 1, r, x);
    }
    return -1;
}

int main() {

    float array[] = {1, 5, 3, 4, 2};
    int size = sizeof(array) / sizeof(float);

    insertionSort(array, size);
    cout<<pesquisaBR(array, 0, size - 1, 4)<<endl;

    // int query = pesquisaBR(array, size, 4);

    // if(query >= 0)
        // cout<<"Indice do valor: "<<query<<endl; 
    // else
        // cout<<"Valor não encontrado :("<<endl; 

    for(int i = 0; i < size; i++) 
        cout<<array[i]<<" ";

    return 0;
}