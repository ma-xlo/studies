#include <stdio.h>

long aVeryBigSum(int ar_count, long* ar) {
    long sum = 0;
    for (int i = 0; i < ar_count; i++) {
        sum += ar[i];
    }
    
    return sum;    
}

int main (void) {
    
    long arr[5] = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
    int array_size = sizeof(arr) / sizeof(long);
    long sum;


    printf("%ld\n", aVeryBigSum(array_size, arr));
}
