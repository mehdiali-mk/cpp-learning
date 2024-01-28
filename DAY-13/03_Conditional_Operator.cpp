/*
 Aim = To demonstrate conditional operator.
 Author = Mehdiali (MK).
 Date = 28 / January / 2024 - 03:47 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int num{};

    cout << "Enter the number = ";
    cin >> num;

    cout << endl
         << num << " is " << ((num % 2 == 0) ? "Even" : "Odd") << " number." << endl;
    return 0;
}
