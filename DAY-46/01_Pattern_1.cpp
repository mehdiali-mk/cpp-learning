/*
 Aim = To Print the star pattern like.
 **********
 **********
 **********
 **********

 Author = Mehdiali (MK).
 Date = 01 / March / 2024 - 06:43 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int row, column;

    cout << "Enter the number of rows = ";
    cin >> row;
    cout << "Enter the number of columns = ";
    cin >> column;

    cout << endl
         << "Your required star pattern as follow: " << endl;
    for (int i = 0; i < row; i++)
    {
        cout << endl;
        for (int j = 0; j < column; j++)
        {
            cout << "* ";
        }
    }
    return 0;
}