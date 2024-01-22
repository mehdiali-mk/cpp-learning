/*
 Aim = To find the given character is vowel or not.
 Author = Mehdiali (MK).
 Date = 21 / January / 2024 - 03:30 PM.
*/

#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter the character = ";
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "\n"
             << ch << " is a vowel." << endl;
        break;

    default:
        cout << "\n"
             << ch << " is not a vowel." << endl;
        break;
    }

    return 0;
}