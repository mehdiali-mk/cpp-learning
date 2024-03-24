/*
 Aim = Arithmetic Sub Array.
 Author = Mehdiali (MK).
 Date = 24 / March / 2024 - 06:43 PM.
*/

#include <iostream>
using namespace std;

void insertArrayElements(int[], size_t);
void arithmeticSubArray(int[], size_t);
void displayArrayElements(int[], size_t);

int main()
{
    size_t arraySize;
    cout << "Enter the length of an array = ";
    cin >> arraySize;

    int array[arraySize];
    insertArrayElements(array, arraySize);
    arithmeticSubArray(array, arraySize);
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

void arithmeticSubArray(int array[], size_t arraySize)
{

    cout << "\nArithmetic Sub Array: ";
    int answer = 2;
    int previousSub = array[1] - array[0];
    int j = 2;
    int current = 2;
    while (j < arraySize)
    {
        if (previousSub == array[j] - array[j - 1])
        {
            current++;
        }
        else
        {
            previousSub = array[j] - array[j - 1];
            current = 2;
        }
        answer = max(answer, current);
        j++;
    }

    cout << answer;
}

void displayArrayElements(int array[], size_t arraySize)
{
    cout << "\n[";
    for (size_t i{0}; i < arraySize; i++)
        cout << " " << array[i];
    cout << " ]";
}