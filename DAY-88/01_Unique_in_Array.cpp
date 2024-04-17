/*
Aim = To find the unique element in an array.
Author = Mehdiali (MK).
Date = 17 / Apr / 2024 - 04:40 PM.
*/

#include <iostream>
using namespace std;

int findUniqueElement(int array[], size_t arraySize)
{
    int xorSum = 0;
    for (int i = 0; i < arraySize; i++)
    {
        xorSum = xorSum ^ array[i];
    }
    return xorSum;
}

int main()
{
    size_t arraySize{};

    cout << "\nEnter the array size = ";
    cin >> arraySize;

    int array[arraySize];

    cout << "\nEnter the elements of an array:\n";
    for (int i = 0; i < arraySize; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> array[i];
    }

    int uniqueElement = findUniqueElement(array, arraySize);

    cout << "\nUnique Element = " << uniqueElement;

    return 0;
}