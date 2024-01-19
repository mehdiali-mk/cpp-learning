/*
 Aim = To find the table of given number.
 Author = Mehdiali (MK).
 Date = 18 / January / 2024 - 04:36 PM.
*/

#include <iostream>

using namespace std;

int main()
{
    int number{}, i{1};

    cout << endl
         << "Enter the number = ";
    cin >> number;

    while (i <= 10)
    {
        cout << endl
             << number << " X " << i << " = " << number * i;
        i++;
    }

    return 0;
}