#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int linearSearch(int * arr , int length, int target);
int binarySearch(int * arr, int length, int target);

int main (void) {
    
    int target; 
    int array[] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
        31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
        41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
        51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
        61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
        71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
        81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
        91, 92, 93, 94, 95, 96, 97, 98, 99, 100
    };




    int arrayLength = sizeof(array) / sizeof(int); 
    
    system("clear");
    printf("Search for number: ");
    scanf("%d", &target);
    system("clear");
    
    linearSearch(array, arrayLength, target);
    binarySearch(array, arrayLength, target);
    printf("+----------------------------------+\n");
}

int linearSearch(int *arr, int length, int target) {
    int count = 1, i;
    
    for(i = 0; i < length; i++) {
        if (arr[i] == target) {
            printf("+-- Linear Search -----------------+\n");
            printf("| Found %d in index %d\t\t   |\n", arr[i], i);
            printf("| Number of operations: %d\t   |\n", count);
        } 
        count ++;
    }
    return 0;
}

int binarySearch(int * arr, int length, int target) {

    int arraySize, low, mid, high, count = 1, guess;

    low = 0;
    high = length - 1;

    while (mid != target) {
        
        mid = high / 2;
        guess = arr[mid];

        count++;
        if ( target == guess ) {
            printf("+-- Binary Search -----------------+\n");
            printf("| Found %d in index %d\t\t   |\n", guess, mid);
            printf("| Number of operations: %d\t   |\n", count);
            break;
        } else if (guess > target){
            high = mid - 1;

        } else if (guess < target) {
            low = mid + 1;
        }

    }

    return 0;
}

