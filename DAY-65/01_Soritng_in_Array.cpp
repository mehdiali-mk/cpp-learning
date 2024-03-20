/*
 Aim = Bubble Sort in Array.
 Author = Mehdiali (MK).
 Date = 20 / March / 2024 - 09:10 PM.
*/

#include <iostream>
using namespace std;

void insertArrayElements(int[], size_t);
void bubbleSort(int[], size_t);
void displayArrayElements(int[], size_t);

int main()
{
    size_t arraySize;
    cout << "Enter the length of an array = ";
    cin >> arraySize;

    int array[arraySize];
    insertArrayElements(array, arraySize);
    bubbleSort(array, arraySize);
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

void bubbleSort(int array[], size_t arraySize)
{
    int counter = 1;
    while (counter < arraySize)
    {
        for (int i = 0; i < arraySize - counter; i++)
        {
            if (array[i] > array[i + 1])
            {
                array[i] = array[i] + array[i + 1];
                array[i + 1] = array[i] - array[i + 1];
                array[i] = array[i] - array[i + 1];
            }
        }
        counter++;
    }
}

void displayArrayElements(int array[], size_t arraySize)
{
    cout << "\n[";
    for (size_t i{0}; i < arraySize; i++)
        cout << " " << array[i];
    cout << " ]";
}