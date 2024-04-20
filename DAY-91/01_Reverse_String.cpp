/*
Aim = To reverse a string using recursion.
Author = Mehdiali (MK).
Date = 19 / Apr / 2024 - 10:33 PM.
*/

#include <iostream>
using namespace std;

void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout << s[0];
}

int main()
{
    string str;

    cout << "\nEnter the string = ";
    cin >> str;

    cout << "\nReverse string = ";
    reverse(str);
    return 0;
}