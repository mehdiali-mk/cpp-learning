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
    int number{0};

    do
    {
        cout << "\nEnter the number between 1 to 5: ";
        cin >> number;
    } while (number < 1 || number > 5);

    return 0;
}
