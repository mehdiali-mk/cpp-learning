/*
 Aim = To demonstrate while loop.
 Author = Mehdiali (MK).
 Date = 30 / January / 2024 - 08:34 PM.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char choice{};

    do
    {
        int length{}, breadth{};

        cout << "\nEnter the length = ";
        cin >> length;

        cout << "Enter the breadth = ";
        cin >> breadth;

        double area = length * breadth;

        cout << "\n Area = " << area;

        cout << "\nCalculate another time? (y/n).";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    return 0;
}
