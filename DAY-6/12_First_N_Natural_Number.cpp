/*
 Aim = To find the sum of first n natural number.
 Author = Mehdiali (MK).
 Date = 21 / January / 2024 - 03:38 PM.
*/

#include <iostream>

using namespace std;

int main()
{

    int number{}, sum{0};

    cout << "Enter the number = ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }

    cout << "\nSum of 1 to " << number << " = " << sum << endl;

    return 0;
}