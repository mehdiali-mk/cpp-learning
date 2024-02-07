/*
 Aim = To demonstrate array as an argument in function.
 Author = Mehdiali (MK).
 Date = 07 / February / 2024 - 05:26 PM.
*/

#include <iostream>
using namespace std;

void printArray(const int array[], const size_t sizeOfArray);
void getArrayElement(int array[], const size_t sizeOfArray);
int main()
{
    int sizeOfArray{};
    cout << "\nEnter the size of an array = ";
    cin >> sizeOfArray;

    int array[sizeOfArray]{};

    getArrayElement(array, sizeOfArray);
    printArray(array, sizeOfArray);
    return 0;
}

void printArray(const int array[], const size_t sizeOfArray)
{
    for (size_t i{0}; i < sizeOfArray; i++)
    {
        cout << "\nArray[" << i << "] = " << array[i];
    }
}
void getArrayElement(int array[], const size_t sizeOfArray)
{
    for (size_t i{0}; i < sizeOfArray; i++)
    {
        cout << "Enter Array[" << i << "] = ";
        cin >> array[i];
    }
}