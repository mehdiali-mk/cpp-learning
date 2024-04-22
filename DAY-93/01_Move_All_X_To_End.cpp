/*
Aim = Move All the X to end of the string.
Author = Mehdiali (MK).
Date = 22 / Apr / 2024 - 05:31 PM.
*/

#include <iostream>
using namespace std;

string moveXToEnd(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = moveXToEnd(s.substr(1));

    if (ch == 'X' || ch == 'x')
    {
        return (ans + ch);
    }

    return (ch + ans);
}

int main()
{
    string str;

    cout << "\nEnter the string = ";
    cin >> str;

    cout << "\nX is Moved = " << moveXToEnd(str);
    return 0;
}