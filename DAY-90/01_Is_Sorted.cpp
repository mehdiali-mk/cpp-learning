/*
Aim = To find the given array is sorted or not.
Author = Mehdiali (MK).
Date = 19 / Apr / 2024 - 10:33 PM.
*/

#include <iostream>
using namespace std;

bool isSorted(int arr[], size_t sizeOfArray)
{
    if (sizeOfArray == 1)
    {
        return true;
    }

    bool restArray = isSorted(arr + 1, sizeOfArray - 1);
    return (arr[0] < arr[1] && restArray);
}

int main()
{
    size_t sizeOfArray{};

    cout << "\nEnter the size of an array = ";
    cin >> sizeOfArray;

    int arr[sizeOfArray];

    cout << "\nEnter the array elements:\n";
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "Enter arr[" << i << "] = ";
        cin >> arr[i];
    }

    boolalpha;
    bool result = isSorted(arr, sizeOfArray);

    cout << "\nIs Sorted = " << result;
    return 0;
}