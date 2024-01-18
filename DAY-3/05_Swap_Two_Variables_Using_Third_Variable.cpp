/*
Aim = To Swap two variables using third variable.
Author = Mehdiali (MK).
Date = 18 / January / 2024 - 09:49 AM.
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter the 1st number = ";
    cin >> num1;
    cout << "Enter the 2nd number = ";
    cin >> num2;

    num3 = num1;
    num1 = num2;
    num2 = num3;

    cout << endl
         << "1st number = " << num1 << endl
         << "2nd number = " << num2;

    return 0;
}