/*
 Aim = To find the factorial of a number.
 Author = Mehdiali (MK).
 Date = 31 / January / 2024 - 04:38 PM.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int number{}, fact{1};

    cout << "Enter the number = ";
    cin >> number;

    if (number < 0)
    {
        number = -number;
    }
    for (int i = 1; i <= number; i++)
    {
        fact *= i;
    }

    cout << "\nFactorial of " << number << " = " << fact;

    return 0;
}