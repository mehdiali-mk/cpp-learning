/*
Aim = A library charges a fine for every book returned late. For first 5 days the fine is 50 paise, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return the book after 30 days your membership will be cancelled. Write a program to accept the number of days the member is late to return the book and display the fine or the appropriate message.
Author = Mehdiali (MK).
Date = 28 / April / 2024 - 04:16 PM.
*/

#include <iostream>
using namespace std;

int main()
{

    int numberOfDays{};

    cout << "Enter the number of days = ";
    cin >> numberOfDays;

    if (numberOfDays >= 1 && numberOfDays <= 5)
    {
        cout << "\n\nYou have to pay 50 Paise fine.";
    }
    else if (numberOfDays >= 6 && numberOfDays <= 10)
    {
        cout << "\n\nYou have to pay 1 Rupee fine.";
    }
    else if (numberOfDays >= 10 && numberOfDays <= 29)
    {
        cout << "\n\nYou have to pay 5 Rupee fine.";
    }
    else if (numberOfDays >= 30)
    {
        cout << "\n\nYou membership has been canceled.";
    }
    else
    {
        cout << "\n\nYou have returned book in time.";
    }

    return 0;
}