/*
 Aim = To print the reverse table.
 Author = Mehdiali (MK).
 Date = 19 / January / 2024 - 04:00 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int number{};

    cout << "Enter the number = ";
    cin >> number;

    for (int i = 10; i >= 1; i--)
    {
        cout << endl
             << number << " X " << i << " = " << number * i;
    }

    return 0;
}