/*
Aim = Print all the permutations of a string.
Author = Mehdiali (MK).
Date = 23 / Apr / 2024 - 06:43 PM.
*/

#include <iostream>
using namespace std;

void permutation(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);

        permutation(ros, ans + ch);
    }
}

int main()
{
    string str;

    cout << "\nEnter the string = ";
    cin >> str;

    cout << "\nPermutations of a string are:\n";
    permutation(str, "");

    return 0;
}