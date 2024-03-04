/*
 Aim = To Print the star pattern like.
     *
    **
   ***
  ****
 *****

 Author = Mehdiali (MK).
 Date = 04 / March / 2024 - 06:52 PM.
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
    for (int i = 0; i < row; i++)
    {
        cout << endl;
        for (int j = 1; j <= row; j++)
        {
            if (j < row - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
    }
    return 0;
}