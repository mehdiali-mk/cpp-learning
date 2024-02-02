/*
 Aim = C Program to Find Reverse Number of a Number
 Author = Mehdiali (MK).
 Date = 02 / February / 2024 - 06:17 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int number{}, tempNumber{}, reverseNumber{}, reminder{};

    cout << "Enter the number = ";
    cin >> number;

    tempNumber = number;

    while (number != 0)
    {
        reminder = number % 10;
        reverseNumber = reverseNumber * 10 + reminder;
        number = number / 10;
    }

    cout << "\nReverse number = " << reverseNumber;
    return 0;
}