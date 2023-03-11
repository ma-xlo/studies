#include <stdio.h>
#include <stdlib.h>

int main() {

    int count = 0;
    int worstCase = 100;
    int array[worstCase];

    for(int i = 0; i <= worstCase; i++) {
        array[i] = i;
    }

    int target = 50; 
    printf("Enter a number: ");
    scanf("%d", &target);

    //binary search algorithm
    int size = sizeof(array) / sizeof(int);
    int guess;
    
    int start = 0;
    int end = size; 
    int mid = (size / 2);

    while (target != guess) {
        mid = (start + end) / 2;
        guess = array[mid];
        
        // calculate the algorithm's complexity
        count++;
        
        if(guess == target) {
            printf("Found %d at index %d\n", target, mid);
            printf("Operations: %d\n", count);
        } 
        else if(guess > target)
            end = mid - 1;
        else if(guess < target)
            start = mid + 1;
        else {
            //printf("Number not found!\n");
            return 0;
        }
        
        
    }

    return 0;

}

//...50...75...88...94...97...99...100
//   01...02...03...04...05...06...007