/*
 Aim = To find the fibonacci series upto nth term.
 Author = Mehdiali (MK).
 Date = 02 / February / 2024 - 04:41 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int number{}, a{0}, b{1}, sum{};

    cout << "Enter the number = ";
    cin >> number;

    cout << "\nFibonacci Series = ";
    for (int i = 1; i <= number; i++)
    {
        cout << " " << sum << " ";
        a = b;
        b = sum;
        sum = a + b;
    }

    return 0;
}