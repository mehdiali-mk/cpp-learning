/*
 Aim = To find the roots of quaratic equation.
        delta == 0
        {
            alpha = -b + sqrt(delta) / 2ac
            beta = -b - sqrt (delta) / 2ac
        }
        alpha = ((-b+sqrt(delta))/(2*a));
        beta = ((-b-sqrt(delta)) / (2*a));

 Author = Mehdiali (MK).
 Date = 19 / January / 2024 - 03:23 PM.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int delta{}, alpha{}, beta{}, a{}, b{}, c{};

    cout << "Enter the a = ";
    cin >> a;
    cout << "Enter the b = ";
    cin >> b;
    cout << "Enter the c = ";
    cin >> c;

    delta = (b * b) - (4 * a * c);

    if (a == 0)
    {
        cout << endl
             << "a = 0 so, it is not a quadratic equation.";
    }
    else if (delta < 0)
    {
        cout << endl
             << "It is an Imaginary Root.";
    }
    else if (delta == 0)
    {
        alpha = ((-b) + (sqrt(delta)) / 2 * a * c);
        beta = ((-b) - (sqrt(delta)) / 2 * a * c);

        cout << endl
             << "There are two Roots:" << endl
             << "Alpha = " << alpha << ", Beta = " << beta << endl;
    }
    else
    {
        alpha = ((-b) + (sqrt(delta)) / 2 * a);
        beta = ((-b) - (sqrt(delta)) / 2 * a);
        cout << endl
             << "There are two Roots:" << endl
             << "Alpha = " << alpha << ", Beta = " << beta << endl;
    }
    return 0;
}