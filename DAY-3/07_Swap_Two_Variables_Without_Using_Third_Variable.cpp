/*
Aim = To swap the two variables without using third variable.
Author = Mehdiali (MK).
Date = 18 / January / 2024 - 09:54 AM.
*/

#include <iostream>

using namespace std;

int main()
{

    int num1{}, num2{};

    cout << "Enter the 1st number = ";
    cin >> num1;
    cout << "Enter the 2nd number = ";
    cin >> num2;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << endl
         << "1st number = " << num1 << endl
         << "2nd number = " << num2 << endl;

    return 0;
}