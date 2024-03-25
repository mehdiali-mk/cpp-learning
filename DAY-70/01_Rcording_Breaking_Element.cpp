/*
 Aim = Recording Breaking Element.
 Author = Mehdiali (MK).
 Date = 25 / March / 2024 - 12:43 PM.
*/

#include <iostream>
using namespace std;

void insertArrayElements(int[], size_t);
void findBreakingElement(int[], size_t);
void displayArrayElements(int[], size_t);

int main()
{
    size_t arraySize;
    cout << "Enter the length of an array = ";
    cin >> arraySize;

    int array[arraySize];
    insertArrayElements(array, arraySize);
    findBreakingElement(array, arraySize);
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

void findBreakingElement(int array[], size_t arraySize)
{
    if (arraySize == 1)
    {
        cout << "\nRecording Breaking Element is: 1";
        return;
    }

    array[arraySize] = -1;

    int answer{0};
    int maximum{-1};

    for (size_t i = 0; i < arraySize; i++)
    {
        if (array[i] > maximum && array[i] > array[i + 1])
        {
            answer++;
        }
        maximum = max(array[i], maximum);
    }

    cout << "\nRecording Breaking Elements are: " << answer;
}

void displayArrayElements(int array[], size_t arraySize)
{
    cout << "\n[";
    for (size_t i{0}; i < arraySize; i++)
        cout << " " << array[i];
    cout << " ]";
}