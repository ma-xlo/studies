#include <stdio.h>

int main(void) {

    int arr[] = {3, 1, 2, 25, 10, 100, 12, 3};
    int arr_size = sizeof(arr) / sizeof(int);
    int *ptr = arr;
    int temp;

    for(int i = 0; i < arr_size; i++) {
        if(arr[i] >= arr[i+1]) {
            temp = arr[i];
            arr[i] = i + 1;
            arr[i+1] = temp;
            i = 0;
        }
    }
    while(*ptr != '\0') {
        printf("%d ", *ptr++);
    }
    printf("\n");
}

