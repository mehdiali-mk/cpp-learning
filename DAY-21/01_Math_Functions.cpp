/*
 Aim = To demonstrate the function of cmath library.
 Author = Mehdiali (MK).
 Date = 04 / February / 2024 - 03:58 PM.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num{};

    cout << "Enter the number = ";
    cin >> num;

    cout << "\nSquare root of " << num << " is = " << sqrt(num) << endl;
    cout << "Cube root of " << num << " is = " << cbrt(num) << endl;

    cout << "Sine of " << num << " is = " << sin(num) << endl;
    cout << "Cosine of " << num << " is = " << cos(num) << endl;

    cout << "Ceil of " << num << " is = " << ceil(num) << endl;
    cout << "Floor of " << num << " is = " << floor(num) << endl;
    cout << "Round of " << num << " is = " << round(num) << endl;

    double raise{};

    cout << "Enter the power = ";
    cin >> raise;

    cout << num << " raised to " << raise << " = " << pow(num, raise);

    return 0;
}