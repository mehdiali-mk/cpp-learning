/*
 Aim = To find the sum of first 10 numbers.
 Author = Mehdiali (MK).
 Date = 18 / January / 2024 - 04:31 PM.
*/

#include <iostream>

using namespace std;

int main()
{
    int sum{};

    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }

    cout << endl
         << "Sum of first 10 numbers = " << sum << endl;

    return 0;
}