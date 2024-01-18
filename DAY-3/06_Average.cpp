/*
Aim = To find the average.
Author = Mehdiali (MK).
Date = 18 / January / 2024 - 09:50 AM.
*/

#include <iostream>

using namespace std;

int main()
{
    int num1{}, num2{}, num3{};

    cout << "Enter the 1st number = ";
    cin >> num1;
    cout << "Enter the 2nd number = ";
    cin >> num2;
    cout << "Enter the 3rd number = ";
    cin >> num3;

    cout << endl
         << "Average = " << ((num1 + num2 + num3) / 3);

    return 0;
}