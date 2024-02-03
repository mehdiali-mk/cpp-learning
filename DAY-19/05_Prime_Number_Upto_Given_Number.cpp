/*
 Aim = C Program to Print All Multiplication Tables between Given Range
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

    cout << "\n\nPrime Number = ";
    for (int i = lowerLimit; i <= upperLimit; i++)
    {
        int number{i}, fact{};
        for (int i = 1; i <= number; i++)
        {
            if (number % i == 0)
            {
                fact++;
            }
            if (fact > 2)
            {
                break;
            }
        }

        if (fact == 2)
        {
            cout << " " << number << " ";
        }
    }

    return 0;
}