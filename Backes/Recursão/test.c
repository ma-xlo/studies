#include <stdio.h>


int count2 = 0;
int DAC_Max(int arr[], int index, int l)
{
    int max;
    count2++;

    if(l - 1 == 0)
    {
      return arr[index];
    }
    if(index >= l - 2)
    {
        if(arr[index] > arr[index + 1])
          return arr[index];
        else
          return arr[index + 1];
    } 
    max = DAC_Max(arr, index + 1, l);   
    if(arr[index] > max)
       return arr[index];
    else
       return max;
}


int main() {

    int array[1] = { 5,2,4,3,1 };
    int size = sizeof(array) / sizeof(array[0]); 

    printf("DAC: %d\n", DAC_Max(array, 0, size));
    printf("Operations: %d\n", count2);



    return 0;
}