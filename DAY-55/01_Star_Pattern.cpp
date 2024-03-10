/*
 Aim = To Print the Palindromic pattern like.
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

 Author = Mehdiali (MK).
 Date = 10 / March / 2024 - 11:14 PM.
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
    for (int i = 1; i <= row; i++)
    {
        cout << endl;
        for (int j = 1; j <= spaceCount; j++)
        {
            cout << " ";
        }
        spaceCount -= 2;
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        if (i != 1)
        {
            for (int j = 2; j <= i; j++)
            {
                cout << j << " ";
            }
        }
    }
    return 0;
}