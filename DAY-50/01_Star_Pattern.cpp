/*
 Aim = To Print the star pattern like.
 1
 22
 333
 4444
 55555

 Author = Mehdiali (MK).
 Date = 05 / March / 2024 - 04:44 PM.
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
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
    }
    return 0;
}