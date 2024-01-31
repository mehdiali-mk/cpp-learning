/*
 Aim = C Program to Calculate Sum of Series- 1-(1/2)+(1/3)-(1/4) upto Nth Term.
 Author = Mehdiali (MK). 1 - 0.5 + 0.33 - 0.25
 Date = 31 / January / 2024 - 06:24 PM.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number{};
    float sum{};
    cout << "Enter the number = ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            sum -= (1.0 / i);
        }
        else
        {
            sum += (1.0 / i);
        }
    }

    cout << "\nSum = " << sum;
    return 0;
}