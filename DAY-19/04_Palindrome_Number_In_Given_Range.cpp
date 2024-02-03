/*
 Aim = C Program to Print All Palindrome Numbers between Given Range.
 Author = Mehdiali (MK).
 Date = 03 / February / 2024 - 04:48 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int lowerLimit{}, upperLimit{};

    cout << "Enter the lower limit of the range = ";
    cin >> lowerLimit;

    cout << "Enter the upper limit of the range = ";
    cin >> upperLimit;

    cout << "\n\nPalindrome number = ";
    for (int i = lowerLimit; i <= upperLimit; i++)
    {
        int number{i}, reminder{}, reverseNumber{};

        while (number != 0)
        {
            reminder = number % 10;
            reverseNumber = reverseNumber * 10 + reminder;
            number = number / 10;
        }

        if (reverseNumber == i)
        {
            cout << " " << reverseNumber << " ";
        }
    }

    return 0;
}