/*
 Aim = To demonstrate while loop.
 Author = Mehdiali (MK).
 Date = 30 / January / 2024 - 08:28 PM.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int number{};

    cout << "Enter the number = ";
    cin >> number;

    while (number < 1 || number > 5)
    {
        cout << "\nEnter the number between 1 to 5 = ";
        cin >> number;
    }

    cout << "\nThank you to follow me.\n";
    return 0;
}
