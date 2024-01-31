/*
 Aim = To find the square root upto 1 to n numbers.
 Author = Mehdiali (MK).
 Date = 31 / January / 2024 - 04:38 PM.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number{};

    cout << "Enter the number = ";
    cin >> number;

    for (int i{1}; i <= number; i++)
    {
        cout << "\nSquare root of " << i << " = " << sqrt(i);
    }

    return 0;
}