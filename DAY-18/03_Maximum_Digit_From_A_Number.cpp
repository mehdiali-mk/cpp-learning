/*
 Aim = C Program to Find Maximum Digit from a Number
 Author = Mehdiali (MK).
 Date = 02 / February / 2024 - 04:44 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int number{}, tempNumber{}, reminder{}, maxDigit{};

    cout << "Enter the number = ";
    cin >> number;

    tempNumber = number;
    maxDigit = tempNumber % 10;
    while (tempNumber != 0)
    {
        reminder = tempNumber % 10;
        if (reminder >= maxDigit)
        {
            maxDigit = reminder;
        }
        tempNumber = tempNumber / 10;
    }

    cout << "\n\nMaximum Digit = " << maxDigit;

    return 0;
}