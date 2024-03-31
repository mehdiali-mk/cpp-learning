/*
Aim = To Print the following star patttern:
 *****
* *** *
** * **
*** ***
** * **
* *** *
 *****

Author = Mehdiali (MK).
Date = 31 / March / 2023 - 12:05 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    // Variable Decleration.
    int rowNumber;

    // Taking the value of rowNumber from the user.
    cout << "Enter the number of Row = ";
    cin >> rowNumber;

    // Printing the pattern.
    for (int i = 1; i <= rowNumber; i++)
    {
        cout << endl;
        for (int j = 1; j <= rowNumber; j++)
        {
            if (j == i || j == ((rowNumber + 1) - i))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
    }
    return 0;
}