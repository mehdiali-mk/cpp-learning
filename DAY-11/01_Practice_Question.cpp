/*
 Aim = For this program I will be using US dollars and cents.

Write a program that asks the user to enter the following:
An integer representing the number of cents.

You may assume that the number of cents entered is greater than or equal to zero.

The program should then display how to provide that change to the user.

In the US:
    1 dollar is 100 cents.
    1 quarter is 25 cents.
    1 dime is 10 cents.
    1 nickel is 5 cents, and
    1 penny is 1 cent.

Here is a simple run:

Enter an amount in cents: 92

You can provide this change as follows:
dollars: 0
quatres: 3
dimes: 1
nickels: 1
pennies: 2

Feel free to use your own currency system.
Also, think of how you might solve the problem using the modulo operator.

Have fun and test your program!!

 Author = Mehdiali (MK).
 Date = 26 / January / 2024 - 11:19 AM.
*/

#include <iostream>
using namespace std;

int main()
{
    int cents{};

    cout << "Enter the cents = ";
    cin >> cents;

    int dollars{}, quatres{}, dimes{}, nickels{}, pennies{};

    /*
        1 dollar is 100 cents.
        1 quarter is 25 cents.
        1 dime is 10 cents.
        1 nickel is 5 cents, and
        1 penny is 1 cent.
    */

    dollars = cents / 100;
    cents = cents % 100;
    quatres = cents / 25;
    cents = cents % 25;
    dimes = cents / 10;
    cents = cents % 10;
    nickels = cents / 5;
    cents = cents % 5;
    pennies = cents;

    /*
        dollars: 0
        quatres: 3
        dimes: 1
        nickels: 1
        pennies: 2
    */

    cout << "\nDollars: " << dollars << endl;
    cout << "Quatres: " << quatres << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}