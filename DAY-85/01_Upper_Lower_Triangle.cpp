/*
Aim = To display the upper and lower triangle.
Author = Mehdiali (MK).
Date = 14 / Apr / 2024 - 04:54 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    // Variable Decleration.
    int numberOfRows, numberOfColumn;

    // Taking the values of numberOfRows and numberOfColumn from the user.
    cout << "Enter the number of Rows = ";
    cin >> numberOfRows;

    cout << "Enter the number of Column = ";
    cin >> numberOfColumn;

    // Array Decleration.
    int array[numberOfRows][numberOfColumn];

    // Taking the array elements from the user.
    cout << endl;
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfColumn; j++)
        {
            cout << "Enter the array [" << i << "][" << j << "] element = ";
            cin >> array[i][j];
        }
    }

    // Printing the Array Elements.
    cout << "\n\nEntered Array Elements are as follow:\n";
    for (int i = 0; i < numberOfRows; i++)
    {
        cout << endl;
        for (int j = 0; j < numberOfColumn; j++)
        {
            cout << "  " << array[i][j];
        }
    }

    // Printing the Upper Triangle.
    cout << "\n\nUpper Triangle of Matrix:\n";
    for (int i = 0; i < numberOfRows; i++)
    {
        cout << endl;
        for (int j = 0; j < numberOfColumn; j++)
        {
            if (i > j)
            {
                cout << "  0";
            }
            else
            {
                cout << "  " << array[i][j];
            }
        }
    }

    // Printing the Lower Triangle.
    cout << "\n\nLower Triangle of Matrix:\n";
    for (int i = 0; i < numberOfRows; i++)
    {
        printf("\n");
        for (int j = 0; j < numberOfColumn; j++)
        {
            if (i < j)
            {
                cout << "  0";
            }
            else
            {
                cout << "  " << array[i][j];
            }
        }
    }

    return 0;
}