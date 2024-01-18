/*
Aim = To find the Compound Interest.
Author = Mehdiali (MK).
Date = 18 / January / 2024 - 10:02 AM.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float principleAmount{}, rate{}, time{}, compoundInterest{}, finalAmount{};

    cout << "Enter the Principle Amount = ";
    cin >> principleAmount;
    cout << "Enter the Rate = ";
    cin >> rate;
    cout << "Enter the time = ";
    cin >> time;

    compoundInterest = principleAmount * (pow((1 + rate / 100), time) - 1);
    finalAmount = principleAmount + compoundInterest;

    cout << endl
         << "Compound Interest = " << compoundInterest << endl
         << "Final Amount = " << finalAmount << endl;

    return 0;
}