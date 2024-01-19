/*
 Aim = To find the number is armstrong number or not.
 Author = Mehdiali (MK).
 Date = 19 / January / 2024 - 04:00 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int number{}, reminder{}, sum{0}, temp{};

    cout << "Enter the number = ";
    cin >> number;

    temp = number;

    while (temp != 0)
    {
        reminder = temp % 10;
        sum = sum + (reminder * reminder * reminder);
        temp = temp / 10;
    }

    if (sum == number)
    {
        cout << endl
             << number << " is an armstrong number.";
    }
    else
    {
        cout << endl
             << number << " is not an armstrong number.";
    }

    return 0;
}