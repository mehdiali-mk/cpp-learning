/*
 Aim = C Program to Check Number is Prime or Not
 Author = Mehdiali (MK).
 Date = 03 / February / 2024 - 04:43 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int number{}, fact{1}, i{2};

    cout << "Enter the number = ";
    cin >> number;

    for (i = 2; i <= number; i++)
    {
        if (number % i == 0)
        {
            fact++;
        }
    }

    if (fact == 2)
    {
        cout << "\n"
             << number << " is prime number.";
    }
    else
    {
        cout << "\n"
             << number << " is not a prime number.";
    }

    return 0;
}