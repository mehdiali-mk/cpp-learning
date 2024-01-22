/*
 Aim = To find the given character is digin or not.
 Author = Mehdiali (MK).
 Date = 21 / January / 2024 - 03:20 PM.
*/

#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "Enter the year = ";
    cin >> year;

    if (year % 4 != 0)
    {
        cout << "\n"
             << year << " is not a leap year.";
    }
    else
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << "\n"
                     << year << " is a leap year.";
            }
            else
            {
                cout << "\n"
                     << year << " is not a leap year.";
            }
        }
        else
        {
            cout << "\n"
                 << year << " is a leap year.";
        }
    }
    return 0;
}