#include <stdio.h>
#include <string.h>



void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main () {

    int array[] = {12, 11, 13, 5, 6};
    int length = sizeof(array) / sizeof(int);
    int *ptr = array;

    insertionSort(array, length);

    for (int i = 0; i < length; i++)
    {
        printf("%d ", *ptr++);
    }
    

    return 0;

}