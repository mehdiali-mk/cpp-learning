/*
 Aim = To find the factors of a number.
 Author = Mehdiali (MK).
 Date = 02 / February / 2024 - 04:38 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int number{};

    cout << "Enter the number = ";
    cin >> number;

    cout << "\nFactors = ";
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
            cout << " " << i << " ";
    }

    return 0;
}