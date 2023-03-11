#include <stdio.h>

int main (void) {

    int arr[3][3] = {
        {10,11,10},
        {11,15,10},
        {10,11,10}
    };

    int middle = sizeof(arr) / sizeof(int);
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d -> %d\n", arr[i][j], j);
        }
    }

    printf("Middle: %d\n", arr[1][1]);
    printf("Array Size: %d\n", middle / 2);
    

}
