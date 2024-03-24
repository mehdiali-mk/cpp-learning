/*
 Aim = Sum of subarray.
 Author = Mehdiali (MK).
 Date = 23 / March / 2024 - 02:58 PM.
*/

#include <iostream>
using namespace std;

void insertArrayElements(int[], size_t);
void sumOfSubarray(int[], size_t);
void displayArrayElements(int[], size_t);

int main()
{
    size_t arraySize;
    cout << "Enter the length of an array = ";
    cin >> arraySize;

    int array[arraySize];
    insertArrayElements(array, arraySize);
    sumOfSubarray(array, arraySize);
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

void sumOfSubarray(int array[], size_t arraySize)
{
    int sum = 0;
    cout << "\nSum of Sub Array:\n[ ";
    for (int i = 0; i < arraySize; i++)
    {
        sum = 0;
        for (int j = i; j < arraySize; j++)
        {
            sum += array[j];
            cout << sum << " ";
        }
    }
    cout << "]";
}

void displayArrayElements(int array[], size_t arraySize)
{
    cout << "\n[";
    for (size_t i{0}; i < arraySize; i++)
        cout << " " << array[i];
    cout << " ]";
}