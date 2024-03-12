/*
 Aim = To Print the Star ZigZag pattern like.
    *       *
  *   *   *   *
*       *       *

 Author = Mehdiali (MK).
 Date = 12 / March / 2024 - 06:07 AM.
*/

#include <iostream>
using namespace std;

int main()
{
    int row, spaceCount;

    cout << "Enter the number of rows = ";
    cin >> row;

    spaceCount = row * 2 - 2;

    cout << endl
         << "Your required star pattern as follow: " << endl;
    for (int i = 1; i <= 3; i++)
    {
        cout << endl;
        for (int j = 1; j <= row; j++)
        {
            if ((i + j) % 4 == 0 || ((i == 2) && j % 4 == 0))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
    }
    return 0;
}