/*
 Aim = C Program to Calculate Sum of Series- 1 + x + x^2 + x^3 upto Nth Term
 Author = Mehdiali (MK).
 Date = 31 / January / 2024 - 06:28 PM.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number{}, x{};
    float sum{};
    cout << "Enter the number = ";
    cin >> number;
    cout << "Enter the x = ";
    cin >> x;

    for (int i = 0; i < number; i++)
    {
        if (i == 0)
        {
            sum += 1;
        }
        else
        {
            sum += pow(x, i);
        }
    }

    cout << "\nSum = " << sum;
    return 0;
}