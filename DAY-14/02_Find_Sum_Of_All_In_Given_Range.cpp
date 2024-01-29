/*
 Aim = C Program to Calculate Sum of All Integers between Given Range
 Author = Mehdiali (MK).
 Date = 29 / January / 2024 - 06:31 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int lowerLimit{}, upperLimit{}, sum{};

    cout << "Enter the lower limit of range = ";
    cin >> lowerLimit;
    cout << "Enter the upper limit of range = ";
    cin >> upperLimit;

    if (lowerLimit > upperLimit)
    {
        lowerLimit = lowerLimit + upperLimit;
        upperLimit = lowerLimit - upperLimit;
        lowerLimit = lowerLimit - upperLimit;
    }

    for (int i{lowerLimit}; i <= upperLimit; i++)
    {
        sum += i;
    }

    cout << "\n\nThe sum = " << sum << endl;

    return 0;
}