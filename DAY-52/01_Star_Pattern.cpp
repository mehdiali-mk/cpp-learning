/*
 Aim = To Print the star pattern like.
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *


 Author = Mehdiali (MK).
 Date = 07 / March / 2024 - 04:53 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int row, column, lowLimit, highLimit;

    cout << "Enter the number of rows = ";
    cin >> row;

    lowLimit = 2;
    highLimit = row - 2;

    cout << endl
         << "Your required star pattern as follow: " << endl;
    for (int i = 1; i <= row; i++)
    {
        cout << endl;
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * row - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
    }
    for (int i = row; i >= 1; i--)
    {
        cout << endl;
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * row - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
    }
    return 0;
}