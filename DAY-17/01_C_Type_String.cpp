/*
 Aim = To demonstrate the c type string.
 Author = Mehdiali (MK).
 Date = 01 / February / 2024 - 06:22 PM.
*/

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char firstName[20];
    char lastName[20];
    char fullName[50];
    char temp[50];

    // cout << firstName; // It will display a garbage value.

    cout << "Enter the first name = ";
    cin >> firstName;
    cout << "Enter the last name = ";
    cin >> lastName;
    cout << "---------------------------" << endl;

    cout << "\nHello, " << firstName << " your first name has " << strlen(firstName) << " characters." << endl;
    cout << "And your last name, " << lastName << " has " << strlen(lastName) << " characters." << endl;

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    cout << "\nYour full name is = " << fullName << endl
         << endl;

    // cout << "\n\nEnter your full name = ";
    // cin.getline(fullName, 50);

    // cout << fullName;

    strcpy(temp, fullName);
    if (strcmp(temp, fullName) == 0)
    {
        cout << temp << " and " << fullName << " are the same." << endl;
    }
    else
    {
        cout << temp << " and " << fullName << " are not the same." << endl;
    }

    for (size_t i{0}; i < strlen(fullName); i++)
    {
        if (isalpha(temp[i]))
        {
            temp[i] = toupper(temp[i]);
        }
    }

    if (strcmp(temp, fullName) == 0)
    {
        cout << temp << " and " << fullName << " are the same." << endl;
    }
    else
    {
        cout << temp << " and " << fullName << " are not the same." << endl;
    }

    return 0;
}