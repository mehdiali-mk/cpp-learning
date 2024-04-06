/*
Aim = To print the following star pattern.
         *
         *
         *
         *
 * * * * * * * * *
         *
         *
         *
         *

Author = Mehdiali (MK).
Date = 06 / April / 2024 - 09:11 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    // Variable Decleration.
    int rowNumber, printCount = 1, spaceCount = 4;

    // Taking the value of rowNumber form the user.
    cout << "Enter the number of Rows = ";
    cin >> rowNumber;

    // Equaling the spaceCount and rowNumber.
    spaceCount = rowNumber;

    for (int i = 0; i < (rowNumber * 2) - 1; i++)
    {
        cout << "\n";
        for (int j = 1; j < spaceCount; j++)
        {
            if (i != rowNumber - 1)
            {
                cout << "  ";
            }
        }

        if (i != rowNumber - 1)
        {
            printCount = 1;
        }
        else
        {
            printCount = (rowNumber * 2) - 1;
        }

        for (int j = 0; j < printCount; j++)
        {
            cout << " *";
        }
    }
    return 0;
}
