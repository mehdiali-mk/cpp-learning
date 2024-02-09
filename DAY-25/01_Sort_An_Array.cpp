/*
 Aim = To sort an array.
 Author = Mehdiali (MK).
 Date = 09 / February / 2024 - 04:52 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of an array = ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter arr[" << i << "] = ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << endl
             << "arr[" << i << "] = " << arr[i];
    }

    return 0;
}