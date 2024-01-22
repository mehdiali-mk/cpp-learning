/*
 Aim = To find the months based on number.
 Author = Mehdiali (MK).
 Date = 21 / January / 2024 - 03:24 PM.
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
        cout << "\nThis is the month of January." << endl;
        break;

    case 2:
        cout << "\nThis is the month of February." << endl;
        break;

    case 3:
        cout << "\nThis is the month of March." << endl;
        break;

    case 4:
        cout << "\nThis is the month of April." << endl;
        break;

    case 5:
        cout << "\nThis is the month of May." << endl;
        break;

    case 6:
        cout << "\nThis is the month of June." << endl;
        break;

    case 7:
        cout << "\nThis is the month of July." << endl;
        break;

    case 8:
        cout << "\nThis is the month of August." << endl;
        break;

    case 9:
        cout << "\nThis is the month of September." << endl;
        break;

    case 10:
        cout << "\nThis is the month of October." << endl;
        break;

    case 11:
        cout << "\nThis is the month of November." << endl;
        break;

    case 12:
        cout << "\nThis is the month of December." << endl;
        break;

    default:
        cout << "~~ Invalid Month's Number ~~" << endl;
        break;
    }
    return 0;
}
