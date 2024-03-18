/*
 Aim = Binary Search in Array.
 Author = Mehdiali (MK).
 Date = 18 / March / 2024 - 03:11 PM.
*/

#include <iostream>
using namespace std;

void insertArrayElements(int[], size_t);
void binarySearchInArray(int[], size_t);
void sortArrayElements(int[], size_t);
void displayArrayElements(int[], size_t);

int main()
{
    size_t arraySize;
    cout << "Enter the length of an array = ";
    cin >> arraySize;

    int array[arraySize];
    insertArrayElements(array, arraySize);
    binarySearchInArray(array, arraySize);
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

void binarySearchInArray(int array[], size_t arraySize)
{
    sortArrayElements(array, arraySize);
    cout << "\nArray Elements after Sort:";
    displayArrayElements(array, arraySize);
    int elementToSearch;
    cout << "\nEnter the element to search = ";
    cin >> elementToSearch;

    int startIndex = 0, endIndex = arraySize - 1;
    int middleIndex;
    while (startIndex <= endIndex)
    {
        middleIndex = (startIndex + endIndex) / 2;
        if (array[middleIndex] == elementToSearch)
        {
            cout << "\nYour element [" << elementToSearch << "] is found at " << middleIndex << " index.";
            break;
        }
        else if (array[middleIndex] > elementToSearch)
        {
            endIndex = middleIndex - 1;
        }
        else
        {
            startIndex = middleIndex + 1;
        }
    }
    if (array[middleIndex] != elementToSearch)
    {
        cout << "\nSorry! Your element [" << elementToSearch << "] is not in the array.";
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