#include <stdio.h>

int main () {
    
    float sum;
    int array[4][1];
    char grades[4][10] = {"first", "second", "third", "fourth"};
    
    for(int i = 0; i < 4; i++) {
        printf("Enter the %s note: ", grades[i]);
        scanf("%d", &array[i]);
    }
    
    for(int i = 0; i < 4; i++) {
        sum += *array[i];        
    }
    
    printf("Arithmetic mean: %.1f \n", sum / 4);


}
