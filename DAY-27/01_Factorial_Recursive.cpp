/*
 Aim = To find the factorial of a number by recursive function.
 Author = Mehdiali (MK).
 Date = 11 / February / 2024 - 6:13 PM.
*/

#include <iostream>
using namespace std;

int factorial(int n);
int main()
{
    int number{};
    cout << "Enter the number = ";
    cin >> number;

    int fact = factorial(number);
    cout << "Factorial of " << number << " is = " << fact;
    return 0;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}