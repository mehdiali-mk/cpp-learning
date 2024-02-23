/*
 Aim = To find the sum of Each Row and Each Column of a 2-D Array.
 Author = Mehdiali (MK).
 Date = 23 / February / 2024 - 06:43 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int rowSize, columnSize;

    cout << "Enter the row size = ";
    cin >> rowSize;
    cout << "Enter the column size = ";
    cin >> columnSize;

    int arr[rowSize][columnSize], sumOfRow[rowSize], sumOfColumn[columnSize];

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            cout << "Enter the arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
            sumOfRow[i] = 0;
            sumOfColumn[j] = 0;
        }
    }

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            sumOfRow[i] += arr[i][j];
            sumOfColumn[j] += arr[i][j];
        }
    }

    cout << "\nSum of Row:\n";
    for (int i = 0; i < rowSize; i++)
    {
        cout << "[" << i + 1 << "] row = " << sumOfRow[i] << endl;
    }
    cout << "\nSum of Column:\n";
    for (int i = 0; i < columnSize; i++)
    {
        cout << "[" << i + 1 << "] column = " << sumOfColumn[i] << endl;
    }

    return 0;
}