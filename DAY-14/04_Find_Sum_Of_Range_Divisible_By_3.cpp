/*
 Aim = C Program to Calculate Sum of All Integers which are Divisible by 3 in a Given Range
 Author = Mehdiali (MK).
 Date = 29 / January / 2024 - 07:41 PM.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int lowerLimit{}, upperLimit{}, sum{0};

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

    for (int i = lowerLimit; i <= upperLimit; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }

    cout << "\n\nSum = " << sum << endl;
    return 0;
}