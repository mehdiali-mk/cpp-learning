/*
Aim = To print the following star pattern:
    *
   ***
  * * *
 *  *  *
*********
 *  *  *
  * * *
   ***
    *



Author = Mehdiali (MK).
Date = 03 / April / 2024 - 06:14 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    // Variable Decleration.
    int rowNumber, printCount = 1, spaceCount, printCount1;

    // Taking the value of rowNumber form the user.
    cout << "Enter the number of Rows = ";
    cin >> rowNumber;

    // Equaling the spaceCount and rowNumber.
    spaceCount = rowNumber;
    printCount1 = 1;

    // Printing the star pattern.
    for (int i = 1; i <= (rowNumber * 2) - 1; i++)
    {
        cout << "\n";
        for (int j = 0; j < spaceCount; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= printCount; j++)
        {

            if (j == 1 || j == printCount || i == rowNumber || j == printCount1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        if (i < rowNumber)
        {
            printCount += 2;
            spaceCount--;
            printCount1++;
        }
        else if (i >= rowNumber)
        {
            printCount -= 2;
            printCount1--;
            spaceCount++;
        }
    }

    cout << "\n\n";
    return 0;
}