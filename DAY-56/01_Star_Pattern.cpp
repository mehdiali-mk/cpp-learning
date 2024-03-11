/*
 Aim = To Print the Palindromic pattern like.
      *
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *

 Author = Mehdiali (MK).
 Date = 11 / March / 2024 - 08:09 PM.
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
    for (int i = 1; i <= row - 1; i++)
    {
        cout << endl;
        for (int j = 1; j <= spaceCount; j++)
        {
            cout << " ";
        }
        spaceCount -= 2;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
    }
    for (int i = row; i >= 1; i--)
    {
        cout << endl;
        for (int j = 1; j <= spaceCount; j++)
        {
            cout << " ";
        }
        spaceCount += 2;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
    }
    return 0;
}