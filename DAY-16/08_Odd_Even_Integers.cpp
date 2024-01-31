/*
 Aim = C Program to Calculate Sum of All Odd and Even Integers in a Given Range Separately
 Author = Mehdiali (MK).
 Date = 31 / January / 2024 - 06:31 PM.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int lowerLimit{}, upperLimit{}, sumOdd{0}, sumEven{0};

    cout << "Enter the lower limit = ";
    cin >> lowerLimit;

    cout << "Enter the upper limit = ";
    cin >> upperLimit;

    for (int i = lowerLimit; i <= upperLimit; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += i;
        }
        else
        {
            sumOdd += i;
        }
    }

    cout << "\nSum of Odd numbers = " << sumOdd;
    cout << "\nSum of Even numbers = " << sumEven;

    return 0;
}