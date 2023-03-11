#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
  
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
  
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
  
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
  
    // We reach here when element is not
    // present in array
    return -1;
}

int buscaCaracter(char *vector, int size, char caracter, int *count) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        
        int mid = low + (high - low) / 2;
        *count += 1;

        if(vector[mid] == caracter)
            return mid;
        if(vector[mid] < caracter)
            low = mid + 1;
        else 
            high = mid - 1;

    }

    return -1;

}

int main() {

    char vector[100] = "123456789abcdefghijklmnopqrstuvwxyz";
    int size = strlen(vector);
    char input;
    int count = 0;

    cout<<"Search: ";
    cin>>input;
    int result = buscaCaracter(vector, size, input, &count);

    if(result < 0)
        cout<<"Search not found!"<<endl;
    else
        cout<<"Index: "<<result<<"\tContent: "<<vector[result]<<"\tOperations: "<<count<<endl;


}