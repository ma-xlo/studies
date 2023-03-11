#include <stdio.h>

void bubbleSort(int *arr, int size) {
    int i, aux, keepItUp, end = size;

    do{
        keepItUp = 0;
        for(i = 0; i < end - 1; i++) {
            if(arr[i] > arr[i+1]){
                aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
                keepItUp = i;
            }
        }
        end--;
    }while(keepItUp != 0);

}

int main() {
    int array[5] = {1,5,2,4,3};

    bubbleSort(array, 5);

    for (int i = 0; i < 5; i++) 
        printf("%d ", array[i]);

    return 0;
}