/*
 Aim = To add two matrix.
 Author = Mehdiali (MK).
 Date = 24 / February / 2024 - 07:26 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int rowSize, columnSize;

    cout << "Enter the size of row = ";
    cin >> rowSize;
    cout << "Enter the size of column = ";
    cin >> columnSize;

    int arr1[rowSize][columnSize], arr2[rowSize][columnSize], arr3[rowSize][columnSize];

    cout << "\nEnter the elements of 1st array.\n";
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            cout << "arr1[" << i << "][" << j << "] = ";
            cin >> arr1[i][j];
        }
    }
    cout << "\nEnter the elements of 2nd array.\n";
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            cout << "arr2[" << i << "][" << j << "] = ";
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "\nSum of 1st array and 2nd array.\n";
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}