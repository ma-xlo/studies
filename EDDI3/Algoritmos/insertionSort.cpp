#include <iostream>
#include <vector>

void printVector(std::vector<float> &arr)
{
    for (int i = 0; i < (int)arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void insertionSort(std::vector<float> &arr)
{
    for (int i = 1; i <= (int)arr.size() - 1; i++)
    {
        int unsorted = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > unsorted)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = unsorted;
    }
}

int main()
{
    std::vector<float> arr{2, 3, 5, 1, 4};
    insertionSort(arr);
    printVector(arr);
}