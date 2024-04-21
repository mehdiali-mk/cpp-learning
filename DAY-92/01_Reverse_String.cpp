/*
Aim = Replace PI with 3.14 in string.
Author = Mehdiali (MK).
Date = 21 / Apr / 2024 - 15:36 PM.
*/

#include <iostream>
using namespace std;

void replacePi(string s)
{
    if (s.length() == 0)
    {
        return;
    }

    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacePi(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacePi(s.substr(1));
    }
}

int main()
{
    string str;

    cout << "\nEnter the string = ";
    cin >> str;

    cout << "\nConverted string = ";
    replacePi(str);
    return 0;
}