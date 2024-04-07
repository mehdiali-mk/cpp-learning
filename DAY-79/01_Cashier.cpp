/*
Aim = A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer.


Author = Mehdiali (MK).
Date = 25 / March / 2023 - 04:50 PM.
*/

#include <iostream>
using namespace std;

int main()
{

    int hundered = 0, fifty = 0, ten = 0, coin = 0, withdrawAmount, reminder;

    cout << "\n\nEnter the Withdraw Amount = ";
    cin >> withdrawAmount;

    for (int i = 0; withdrawAmount != 0; i++)
    {
        reminder = withdrawAmount % 10;
        withdrawAmount = withdrawAmount / 10;

        if (i == 0)
        {
            coin = reminder;
            continue;
        }

        if (withdrawAmount == 0)
        {
            hundered = reminder;
            continue;
        }
        if (reminder == 5 && i == 1)
        {
            fifty = reminder;
            continue;
        }

        if (reminder < 5 && i == 1)
        {
            ten = reminder;
            continue;
        }

        if (reminder > 5 && i == 1)
        {
            fifty = 1;
            ten = reminder - 5;
            continue;
        }
    }

    cout << "\n\nHundered = " << hundered << "\nFifty = " << fifty << "\nTen = " << ten << "\nCoin = " << coin;

    return 0;
}