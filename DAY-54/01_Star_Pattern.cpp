/*
 Aim = To Print the star pattern like.
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

 Author = Mehdiali (MK).
 Date = 09 / March / 2024 - 11:11 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int row;

    cout << "Enter the number of rows = ";
    cin >> row;

    cout << endl
         << "Your required star pattern as follow: " << endl;
    for (int i = 1; i <= row; i++)
    {
        cout << endl;
        for (int j = i; j <= row - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
    }
    return 0;
}