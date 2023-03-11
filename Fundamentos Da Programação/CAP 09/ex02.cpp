#include<iostream>
#include<string.h>

using namespace std;

bool isConsonant(char letter) {

    letter = tolower(letter);

    char vowels[6] = "aeiou";

    for(int i = 0; i < 5; i++)
        if(letter == vowels[i])
            return false;

    return true;

}

int countConsonant(char arr[], int size) {

    if(size == 0)
        return 0;

    if(isConsonant(arr[size - 1]))
        return 1 + countConsonant(arr, size - 1);

    return countConsonant(arr, size - 1);
    
}

int main()
{
    char str[100] = "marcelo";
    int size = strlen(str);

    cout<<"Consonant: "<<countConsonant(str, size);
    return 0;
}