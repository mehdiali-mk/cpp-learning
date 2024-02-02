/*
 Aim = C Program to Find Sum of All Digits of a Number.
 Author = Mehdiali (MK).
 Date = 02 / February / 2024 - 06:15 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int number{}, tempNumber{}, reminder{}, sum{};

    cout << "Enter the number = ";
    cin >> number;

    while (number != 0)
    {
        reminder = number % 10;
        sum += reminder;
        number = number / 10;
    }

    cout << "\nThe sum of digits = " << sum;
    return 0;
}