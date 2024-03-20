/*
 Aim = Sorting in Array.
 Author = Mehdiali (MK).
 Date = 19 / March / 2024 - 03:59 PM.
*/

#include <iostream>
using namespace std;

void insertArrayElements(int[], size_t);
void sortArrayElements(int[], size_t);
void displayArrayElements(int[], size_t);

int main()
{
    size_t arraySize;
    cout << "Enter the length of an array = ";
    cin >> arraySize;

    int array[arraySize];
    insertArrayElements(array, arraySize);
    sortArrayElements(array, arraySize);
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

void sortArrayElements(int array[], size_t arraySize)
{
    for (size_t i = 0; i < arraySize; i++)
    {
        for (size_t j = 0; j < arraySize; j++)
        {
            if (array[i] < array[j])
            {
                array[i] = array[i] + array[j];
                array[j] = array[i] - array[j];
                array[i] = array[i] - array[j];
            }
        }
    }
}

void displayArrayElements(int array[], size_t arraySize)
{
    cout << "\n[";
    for (size_t i{0}; i < arraySize; i++)
        cout << " " << array[i];
    cout << " ]";
}