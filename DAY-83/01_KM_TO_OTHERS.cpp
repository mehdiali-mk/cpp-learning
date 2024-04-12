/*
Aim = The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters.
Author = Mehdiali (MK).
Date = 12 / Apr / 2024 - 10:01 PM.
*/

#include <iostream>
using namespace std;

int main()
{

    // Variable Decleration.
    float km;

    cout << "Enter the distance between two cities in km = ";
    cin >> km;

    cout << "\n\nThe distance in meter = " << km * 1000;
    cout << "\nThe distance in feet = " << km * 3280.84;
    cout << "\nThe distance in inches = " << km * 39370.08;
    cout << "\nThe distance in centimeters = " << km * 100000;
    cout << "\nThe distance in miles = " << km * 0.621371;
    return 0;
}