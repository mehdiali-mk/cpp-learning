/*
 Aim = C Program to Check Number is Palindrome or Not.
 Author = Mehdiali (MK).
 Date = 02 / February / 2024 - 06:22 PM.
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

    if (tempNumber == reverseNumber)
    {
        cout << tempNumber << " is a palindrome number.";
    }
    else
    {
        cout << tempNumber << " is not a palindrome number.";
    }

    return 0;
}