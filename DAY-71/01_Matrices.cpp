/*
 Aim = C++ Program to Check whether Two Matrices are Equal or Not.
 Author = Mehdiali (MK).
 Date = 26 / March / 2024 - 09:39 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    // Variable Decleration.
    int rowSize{}, columnSize{}, flag = 1;

    // Taking the rowSize and columnSize from the user.
    cout << "Enter the size of Row = ";
    cin >> rowSize;

    cout << "Enter the size of Column = ";
    cin >> columnSize;

    int array1[rowSize][columnSize], array2[rowSize][columnSize];

    // Taking the values of arrays.
    cout << "\nEnter the values for Array 1:\n";
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            cout << "Enter the [" << i << "][" << j << "] Element of Array = ";
            cin >> array1[i][j];
        }
    }

    cout << "\n\nEnter the values for Array 2:\n";
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            cout << "Enter the [" << i << "][" << j << "] Element of Array = ";
            cin >> array2[i][j];
        }
    }

    // Main Calculation.
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            if (array1[i][j] != array2[i][j])
            {
                cout << "\n\nMatrix are not Equal";
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    if (flag == 1)
    {
        cout << "\n\nMatrix are Equal.";
    }

    return 0;
}