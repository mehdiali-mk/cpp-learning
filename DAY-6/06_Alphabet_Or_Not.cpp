/*
 Aim = To find the given character is digin or not.
 Author = Mehdiali (MK).
 Date = 21 / January / 2024 - 03:18 PM.
*/

#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter the character = ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        cout << "\nThe given character is an Alphabet" << endl;
    }
    else
    {
        cout << "\nThe given character is not an Alphabet" << endl;
    }
    return 0;
}