/*
Aim = To convert the number of days into Years, Months and Days.
Author = Mehdiali (MK).
Date = 18 / January / 2024 - 09:45 AM.
*/

#include <iostream>

using namespace std;

int main()
{
    int noOfDays{}, year{}, month{}, days{};

    cout << "Enter the number of days = ";
    cin >> noOfDays;

    year = noOfDays / 365;
    month = (noOfDays % 365) / 30;
    days = (noOfDays % 365) % 30;

    cout << endl
         << "Year = " << year << endl
         << "Month = " << month << endl
         << "Days = " << days;
    return 0;
}