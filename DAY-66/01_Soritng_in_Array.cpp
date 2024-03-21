/*
 Aim = Insertion Sort in Array.
 Author = Mehdiali (MK).
 Date = 21 / March / 2024 - 09:04 PM.
*/

#include <iostream>
using namespace std;

void insertArrayElements(int[], size_t);
void insertionSort(int[], size_t);
void displayArrayElements(int[], size_t);

int main()
{
    size_t arraySize;
    cout << "Enter the length of an array = ";
    cin >> arraySize;

    int array[arraySize];
    insertArrayElements(array, arraySize);
    insertionSort(array, arraySize);
    cout << "\nThe shorted array is:";
    displayArrayElements(array, arraySize);
    return 0;
}

void insertArrayElements(int array[], size_t arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        cout << "array[" << i << "] = ";
        cin >> array[i];
    }
}

void insertionSort(int array[], size_t arraySize)
{
    for (int i = 1; i < arraySize; i++)
    {
        int current = array[i];
        int j = i - 1;
        while (array[j] > current && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = current;
    }
}

void displayArrayElements(int array[], size_t arraySize)
{
    cout << "\n[";
    for (size_t i{0}; i < arraySize; i++)
        cout << " " << array[i];
    cout << " ]";
}