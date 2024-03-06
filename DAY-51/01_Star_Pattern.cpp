/*
 Aim = To Print the star pattern like.
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15

 Author = Mehdiali (MK).
 Date = 06 / March / 2024 - 06:44 PM.
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
    for (int i = 1, k = 0; i <= row; i++)
    {
        cout << endl;
        for (int j = 1; j <= i; j++)
        {
            cout << ++k;
            if (k <= 9)
            {
                cout << "  ";
            }
            else
            {
                cout << " ";
            }
        }
    }
    return 0;
}