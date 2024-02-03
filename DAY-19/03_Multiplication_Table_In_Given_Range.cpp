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

    for (int i = lowerLimit; i <= upperLimit; i++)
    {
        cout << "\n\n";
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }

    return 0;
}