/*
 Aim = To demonstrate switch case statement.
 Author = Mehdiali (MK).
 Date = 28 / January / 2024 - 02:56 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    char grade{};

    cout << "What grade do you want: ";
    cin >> grade;

    switch (grade)
    {
    case 'a':
    case 'A':
        cout << "\nYou need 90 or above, study hard!" << endl;
        break;

    case 'b':
    case 'B':
        cout << "\nYou need 80-89 for a B, go study!" << endl;
        break;
    case 'c':
    case 'C':
        cout << "\nYou need 70-79 for an average grade." << endl;
        break;
    case 'd':
    case 'D':
        cout << "\nHmm, you should strive for a better grade. All you need is 60-69." << endl;
        break;
    case 'f':
    case 'F':
    {
        char confirm{};
        cout << "\nAre you sure (y/n) = ";
        cin >> confirm;

        if (confirm == 'y' || confirm == 'Y')
        {
            cout << "\nOK, I guess you didn't study!" << endl;
        }
        else if (confirm == 'n' || confirm == 'N')
        {
            cout << "\nGOOD- go study!" << endl;
        }
        else
        {
            cout << "\nWrong CHOICE." << endl;
        }
        break;
    }
    break;
    default:
        cout << "\nSorry! not a valid grade." << endl;
    }
    return 0;
}