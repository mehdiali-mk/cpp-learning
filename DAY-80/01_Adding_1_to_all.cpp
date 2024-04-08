/*
Aim = If a five-digit number is input through the keyboard, write a
program to print a new number by adding one to each of its
digits. For example if the number that is input is 12391 then
the output should be displayed as 23402.

Author = Mehdiali (MK).
Date = 08 / April / 2023 - 09:02 PM.
*/

#include <iostream>
using namespace std;

int main()
{

    int number, digit1, digit2, digit3, digit4, digit5;

    cout << "\n\nEnter the 5-Digit Number = ";
    cin >> number;

    digit1 = number / 10000;
    digit2 = (number / 1000) % 10;
    digit3 = (number / 100) % 10;
    digit4 = (number / 10) % 10;
    digit5 = (number / 1) % 10;

    digit1 += 1;
    digit2 += 1;
    digit3 += 1;
    digit4 += 1;
    digit5 += 1;

    if (digit1 == 10)
    {
        digit1 = 0;
    }

    if (digit2 == 10)
    {
        digit2 = 0;
    }

    if (digit3 == 10)
    {
        digit3 = 0;
    }

    if (digit4 == 10)
    {
        digit4 = 0;
    }

    if (digit5 == 10)
    {
        digit5 = 0;
    }

    digit1 = digit1 * 10000;
    digit2 = digit2 * 1000;
    digit3 = digit3 * 100;
    digit4 = digit4 * 10;

    number = digit1 + digit2 + digit3 + digit4 + digit5;

    cout << "\nThe Number = " << number;
    return 0;
}