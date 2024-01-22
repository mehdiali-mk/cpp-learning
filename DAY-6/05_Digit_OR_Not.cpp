/*
 Aim = To find the given character is digin or not.
 Author = Mehdiali (MK).
 Date = 21 / January / 2024 - 03:08 PM.
*/

#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter the character = ";
    cin >> ch;

    if (ch >= '0' && ch <= '9')
    {
        cout << "\nThe given character is a digit" << endl;
    }
    else
    {
        cout << "\nThe given character is not a digit" << endl;
    }
    return 0;
}