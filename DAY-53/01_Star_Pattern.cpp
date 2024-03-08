/*
 Aim = To Print the star pattern like.
    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *

 Author = Mehdiali (MK).
 Date = 08 / March / 2024 - 11:08 PM.
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
        for (int j = 1; j <= row; j++)
        {
            cout << "* ";
        }
    }
    return 0;
}