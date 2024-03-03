/*
 Aim = To Print the star pattern like.
 *****
 ****
 ***
 **
 *

 Author = Mehdiali (MK).
 Date = 03 / March / 2024 - 06:47 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int row, column;

    cout << "Enter the number of rows = ";
    cin >> row;

    cout << endl
         << "Your required star pattern as follow: " << endl;
    for (int i = 1; i <= row; i++)
    {
        cout << endl;
        for (int j = i; j <= row; j++)
        {
            cout << "* ";
        }
    }
    return 0;
}