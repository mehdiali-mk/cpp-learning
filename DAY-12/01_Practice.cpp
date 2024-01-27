
/*
 Aim = Shipping cost calculator.

    Ask the user for package dimension in inches,
    Length, width, height - these should be integers.

    All dimension must be 10 inches or less or we cannot ship it.

    Base cost $2.50.

    If package volume is greater than 100 cubic inches there is a 10% surcharge.
    If package voluem is greater than 500 cubic inches there is a 25% surcharge.

 Author = Mehdiali (MK).
 Date = 27 / January / 2024 - 06:09 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int length{}, width{}, height{};
    float baseRate{2.50}, volume{}, totalPrice{}, extraCharge1{0.10}, extraCharge2{0.25};
    cout << "Enter the length = ";
    cin >> length;
    cout << "Enter the width = ";
    cin >> width;
    cout << "Enter the height = ";
    cin >> height;

    if (length <= 10 && width <= 10 && height <= 10)
    {
        volume = length * width * height;
        totalPrice = baseRate;
        if (volume >= 100 && volume <= 499)
        {
            totalPrice = totalPrice + totalPrice * extraCharge1;
        }
        else if (volume >= 500)
        {
            totalPrice = totalPrice + totalPrice * extraCharge2;
        }
        cout << "\n\nVolume = " << volume;
        cout << "\nYour shipping charge = " << totalPrice << endl;
    }
    else
    {
        cout << "\nYour order is not applicable.";
    }

    return 0;
}
