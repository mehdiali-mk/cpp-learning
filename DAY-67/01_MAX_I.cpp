/*
 Aim = Insertion Sort in Array.
 Author = Mehdiali (MK).
 Date = 21 / March / 2024 - 09:04 PM.
*/

#include <iostream>
using namespace std;

void insertArrayElements(int[], size_t);
void maxTillI(int[], size_t);

int main()
{
    size_t arraySize;
    cout << "Enter the length of an array = ";
    cin >> arraySize;

    int array[arraySize];
    insertArrayElements(array, arraySize);
    maxTillI(array, arraySize);
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

void maxTillI(int array[], size_t arraySize)
{
    int maxI = array[0];
    cout << "\n[ ";
    for (int i = 0; i < arraySize; i++)
    {
        if (maxI < array[i])
        {
            maxI = array[i];
        }
        cout << maxI << " ";
    }
    cout << "] ";
}
