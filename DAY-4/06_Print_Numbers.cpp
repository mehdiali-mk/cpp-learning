/*
 Aim = To print the numbers form 1 to n.
 Author = Mehdiali (MK).
 Date = 18 / January / 2024 - 04:41 PM.
*/

#include <iostream>

using namespace std;

int main()
{
    int num{};

    cout << endl
         << "Enter the number = ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        cout << i << "  ";
    }

    return 0;
}
