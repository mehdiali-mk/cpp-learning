/*
 Aim = To find the months based on number.
 Author = Mehdiali (MK).
 Date = 21 / January / 2024 - 03:38 PM.
*/

#include <iostream>

using namespace std;

int main()
{
    int number{};

    do
    {
        cout << "\nEnter the number between 1 to 12 = ";
        cin >> number;
    } while (!(number >= 1 && number <= 12));

    switch (number)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "\nTotal Days = 31" << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "\nTotal Days = 30" << endl;
        break;
    case 2:
        cout << "\nTotal Days = 28 OR 29" << endl;
        break;
    default:
        cout << "~~ Invalid Month's Number ~~" << endl;
        break;
    }
    return 0;
}
