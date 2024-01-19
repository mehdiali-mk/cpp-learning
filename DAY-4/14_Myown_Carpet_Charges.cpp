/*
 Aim = Myown carpet cleaning service.
Charges R.s 30 pre room.
Sales tax rate is 6%.
Estimates are valid for 30 days.

Prompt the user for the number of rooms they would like to cleaned and provide an estimate such as:

Estimate for capet cleaning service:
Number of rooms = 2
Price per room = 30.
Cost = 60.
Tax = 3.6.
============================
Total Estimate = 63.6
This estimate is valid for 30 days.

 Author = Mehdiali (MK).
 Date = 19 / January / 2024 - 04:57 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int costPerRoom{30}, rateOfTax{6}, validPeriod{30};
    int numberOfRoom{};
    int totalCost{};
    float totalTax{}, grandTotal{};

    cout << endl
         << "Enter the number of rooms = ";
    cin >> numberOfRoom;

    totalCost = numberOfRoom * costPerRoom;
    totalTax = rateOfTax * totalCost / 100.0;
    grandTotal = totalCost + totalTax;

    cout << endl
         << "Estimate for capet cleaning service:" << endl;
    cout << "Number of rooms = " << numberOfRoom << endl;
    cout << "Price per room = " << costPerRoom << endl;
    cout << "Cost = " << totalCost << endl;
    cout << "Tax = " << totalTax << endl;
    cout << "============================" << endl;
    cout << "Total Estimate = " << grandTotal << endl;
    cout << "This estimate is valid for " << validPeriod << " days.";

    return 0;
}