/*
 Aim = To find the number is two digit number or not.
 Author = Mehdiali (MK).
 Date = 18 / January / 2024 - 04:39 PM.
*/

#include <iostream>

using namespace std;

int main()
{
    int number{};

    cout << endl
         << "Enter the number = ";
    cin >> number;

    if (number > 9 && number < 100)
    {
        cout << endl
             << number << " is two digit number.";
    }
    else
    {
        cout << endl
             << number << " is not two digit number.";
    }

    return 0;
}