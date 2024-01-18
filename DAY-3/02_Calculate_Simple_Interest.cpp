/*
Aim = To find the simple interest.
Author = Mehdiali (MK).
Date = 18 / January / 2024 - 09:27 AM.
*/

#include <iostream>

using namespace std;

int main()
{

    int principleAmount{}, rate{}, time{}, simpleInterest{}, finalAmount{};

    cout << "Enter the Principle Amount = ";
    cin >> principleAmount;
    cout << "Enter the rate = ";
    cin >> rate;
    cout << "Enter the time = ";
    cin >> time;

    simpleInterest = (principleAmount * rate * time) / 100;
    finalAmount = principleAmount + simpleInterest;

    cout << endl
         << "Simple Interest = " << simpleInterest << endl
         << "Final Amount = " << finalAmount;

    return 0;
}