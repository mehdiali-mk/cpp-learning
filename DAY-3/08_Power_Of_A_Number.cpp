/*
Aim = To find the power of a number.
Author = Mehdiali (MK).
Date = 18 / January / 2024 - 09:58 AM.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num{}, power{};

    cout << "Enter the number = ";
    cin >> num;
    cout << "Enter the power = ";
    cin >> power;

    cout << endl
         << "Answer = " << pow(num, power) << endl;

    return 0;
}
