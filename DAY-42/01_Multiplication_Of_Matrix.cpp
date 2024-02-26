/*
 Aim = To Multiply Two Matrices
 Author = Mehdiali (MK).
 Date = 26 / February / 2024 - 08:12 PM.
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

    int arr1[rowSize][columnSize], arr2[columnSize][rowSize], arr3[columnSize][rowSize];

    cout << "\nEnter the elements of 1st matrix:\n";
    for (size_t i = 0; i < rowSize; i++)
    {
        for (size_t j = 0; j < columnSize; j++)
        {
            cout << "arr1[" << i << "][" << j << "] = ";
            cin >> arr1[i][j];
        }
    }
    cout << "\nEnter the elements of 2nd matrix:\n";
    for (size_t i = 0; i < columnSize; i++)
    {
        for (size_t j = 0; j < rowSize; j++)
        {
            cout << "arr2[" << i << "][" << j << "] = ";
            cin >> arr2[i][j];
        }
    }

    for (size_t i = 0; i < rowSize; i++)
    {
        for (size_t j = 0; j < columnSize; j++)
        {
            arr3[i][j] = 0;
            for (size_t k = 0; k < columnSize; k++)
            {
                arr3[i][j] = arr3[i][j] + arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout << "\nMatrix after multiplication:\n";
    for (size_t i = 0; i < columnSize; i++)
    {
        for (size_t j = 0; j < rowSize; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
