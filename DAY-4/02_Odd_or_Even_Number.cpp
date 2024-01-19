/*
 Aim = To find the number is even or odd.
 Author = Mehdiali (MK).
 Date = 18 / January / 2024 - 04:34 PM.
*/

#include <iostream>

using namespace std;

int main()
{
    int num{};

    cout << "Enter the number = ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << endl
             << num << " is even number.";
    }
    else
    {
        cout << endl
             << num << " is odd number.";
    }

    return 0;
}