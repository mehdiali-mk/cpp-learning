/*
Aim = Matrix is an Identity Matrix or Not
Author = Mehdiali (MK).
Date = 27 / March / 2023 - 11:25 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    // Variable Decleration.
    int numberOfRows, numberOfColumn, flag = 1;

    printf("\n\n~~ Written By: Mehdiali (MK) ~~\n\n");

    // Taking the values of numberOfRows and numberOfColumn from the user.
    cout << "Enter the number of Rows = ";
    cin >> numberOfRows;

    cout << "Enter the number of Column = ";
    cin >> numberOfColumn;

    // Array Decleration.
    int array[numberOfRows][numberOfColumn];

    // Taking the array elements from the user.
    cout << "\n";
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
            cout << array[i][j];
        }
    }

    // Checking the matrix is identity or not.
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfColumn; j++)
        {
            if (i == j && array[i][j] != 1)
            {
                cout << "\n\nThe Matrix is not Identity.";
                flag = 0;
                break;
            }
            if (i != j && array[i][j] != 0)
            {
                cout << "\n\nThe Matrix is not Identity.";
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
        cout << "\n\nThe Matrix is Identity.";
    }

    return 0;
}