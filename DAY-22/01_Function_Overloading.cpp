/*
 Aim = To demonstrate the function overloading.
 Author = Mehdiali (MK).
 Date = 05 / February / 2024 - 05:17 PM.
*/

#include <iostream>
using namespace std;

int addNumbers(int, int);
double addNumbers(double, double);

int main()
{
    cout << "2 + 5 = " << addNumbers(2, 5) << endl;
    cout << "3.4 + 12.5 = " << addNumbers(3.4, 12.5) << endl;
    return 0;
}

int addNumbers(int num1, int num2) { return num1 + num2; };
double addNumbers(double num1, double num2) { return num1 + num2; };