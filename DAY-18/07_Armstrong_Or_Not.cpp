/*
 Aim = C Program to Check Number is Armstrong or Not.
 Author = Mehdiali (MK).
 Date = 02 / February / 2024 - 06:26 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int number{}, tempNumber{}, reminder{}, sum{};

    cout << "Enter the number = ";
    cin >> number;

    tempNumber = number;

    while (number != 0)
    {
        reminder = number % 10;
        sum += (reminder * reminder * reminder);
        number = number / 10;
    }

    if (tempNumber == sum)
    {
        cout << tempNumber << " is an armstrong number.";
    }
    else
    {
        cout << tempNumber << " is not an armstrong number.";
    }

    return 0;
}