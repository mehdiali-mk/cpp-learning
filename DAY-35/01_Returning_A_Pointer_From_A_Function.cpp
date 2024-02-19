/*
 Aim = To returning a pointer from a function
 Author = Mehdiali (MK).
 Date = 19 / February / 2024 - 08:18 PM.
*/

#include <iostream>
using namespace std;

int *createArray(size_t size, int initialValue)
{
    int *newArray = {nullptr};
    newArray = new int[size];
    for (size_t i{0}; i < size; i++)
    {
        *(newArray + i) = initialValue;
    }

    return newArray;
}

void displayArray(const int *const array, size_t size)
{
    cout << "My Array:" << endl;
    for (size_t i{0}; i < size; i++)
    {
        cout << "array[" << i << "] = " << array[i] << endl;
    }
}

int main()
{
    int *myArray{nullptr};
    size_t size;
    int initialValue{0};

    cout << "Enter the size of an array = ";
    cin >> size;
    cout << "Enter the initial value for an array = ";
    cin >> initialValue;

    myArray = createArray(size, initialValue);
    cout << "\n--------------------------------" << endl;
    displayArray(myArray, size);
    return 0;
}