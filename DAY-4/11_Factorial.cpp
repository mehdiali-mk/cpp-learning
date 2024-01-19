/*
 Aim = To find the factorial of a number.
 Author = Mehdiali (MK).
 Date = 19 / January / 2024 - 03:55 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int number{}, fact{1};

    cout << endl
         << "Enter the number = ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }

    cout << endl
         << "Factorial of " << number << " is = " << fact;

    return 0;
}