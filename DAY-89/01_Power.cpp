/*
Aim = To find the power of a number using recursion.
Author = Mehdiali (MK).
Date = 18 / Apr / 2024 - 06:04 PM.
*/

#include <iostream>
using namespace std;

int findPower(int number, int power)
{
    if (power == 0)
    {
        return 1;
    }

    return number * findPower(number, power - 1);
}

int main()
{
    int number{}, power{};

    cout << "\nEnter the number = ";
    cin >> number;

    cout << "Enter the power = ";
    cin >> power;

    int result = findPower(number, power);

    cout << "\nResult = " << result << endl;

    return 0;
}