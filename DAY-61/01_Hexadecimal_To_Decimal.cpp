/*
 Aim = Hexadecimal to Decimal Conversion.
 Author = Mehdiali (MK).
 Date = 16 / March / 2024 - 09:06 PM.
*/

#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int hexadecimalToDecimal(string num);

int main()
{
    string num;
    cout << "Enter the Hexadecimal number = ";
    cin >> num;

    cout << "\nDecimal = " << hexadecimalToDecimal(num);
}

int hexadecimalToDecimal(string num)
{
    int result = 0;
    int power{1};
    int size = num.size();

    for (int i = size - 1; i >= 0; i--)
    {
        if (num[i] >= '0' && num[i] <= '9')
        {
            result += power * (num[i] - '0');
        }
        else if (num[i] >= 'A' && num[i] <= 'F')
        {
            result += power * (num[i] - 'A' + 10);
        }

        power *= 16;
    }
    return result;
}