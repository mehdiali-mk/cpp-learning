/*
 Aim = Myown carpet cleaning service.
Charges:
    Rs. 25 per Small Rooms.
    Rs. 35 per Large Rooms.
Sales tax rate is 6%.
Estimates are valid for 30 days.

Prompt the user for the number of small rooms and large rooms they would like to cleaned and provide an estimate such as:

Estimate for capet cleaning service:
Number of small rooms = 3
Number of large rooms = 1
Price per small room = 25.
Price per large room = 35.
Cost = 110.
Tax = 6.6.
============================
Total Estimate = 116.6
This estimate is valid for 30 days.

 Author = Mehdiali (MK).
 Date = 19 / January / 2024 - 05:15 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int costPerSmallRoom{25}, costPerLargeRoom{35}, rateOfTax{6}, validPeriod{30};
    int numberOfSmallRoom{}, numberOfLargeRoom{};
    int totalCost{};
    float totalTax{}, grandTotal{};

    cout << endl
         << "Estimate for capet cleaning service:" << endl;
    cout << "Number of small rooms = ";
    cin >> numberOfSmallRoom;
    cout << "Number of large rooms = ";
    cin >> numberOfLargeRoom;
    cout << "Price per small room = " << costPerSmallRoom << endl;
    cout << "Price per large room = " << costPerLargeRoom << endl;
    totalCost = (costPerSmallRoom * numberOfSmallRoom) + (costPerLargeRoom * numberOfLargeRoom);
    cout << "Cost = " << totalCost << endl;
    totalTax = (rateOfTax * totalCost / 100.0);
    cout << "Tax = " << totalTax << endl;
    cout << "============================" << endl;
    grandTotal = (totalCost + totalTax);
    cout << "Total Estimate = " << grandTotal << endl;
    cout << "This estimate is valid for " << validPeriod << " days.";

    return 0;
}