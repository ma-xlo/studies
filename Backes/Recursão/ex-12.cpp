/*Crie um programa que contenha uma função recursiva para encontrar o menor elemento
em um vetor.*/

#include<iostream>
using namespace std;


int op = 0;
int findMin(int arr[], int size, int aux) {
    op++;
    if(size - 1 == 0)
        return arr[0];
    
    aux = arr[size - 1];

    if(aux < arr[0])
        arr[0] = aux;

    return findMin(arr, size - 1, aux);
}

int recforMin(int arr[], int len){
   int minimum;
   if (len == 1){
      minimum=arr[0];
      return minimum;
   }
   else{
      return minimum=arr[len]<recforMin(arr,len-1)?arr[len]:recforMin(arr,len-1);
   }
}

int main()
{
    int arr[9] = {5,3,2,4,1,8,7,9,10};

    printf("%d\n", findMin(arr, 9, 0));
    printf("%d\n", op);
    op=0;
    printf("%d\n", recfatorMin(arr, 9));
    printf("%d\n", op);

    return 0;
}