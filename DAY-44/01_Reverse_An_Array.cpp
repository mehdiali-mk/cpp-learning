/*
 Aim = To Reverse an Array.
 Author = Mehdiali (MK).
 Date = 27 / February / 2024 - 06:29 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int size, i, j;

    cout << "Enter the size = ";
    cin >> size;

    int arr[size];

    for (i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    for (i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
    }

    cout << "\n\nArr = { ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " }\n";

    return 0;
}