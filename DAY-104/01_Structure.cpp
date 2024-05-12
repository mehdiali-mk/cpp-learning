/*
Aim = Structure
Author = Mehdiali (MK).
Date = 12 / May / 2024 - 11:10 PM.
*/

#include <iostream>
using namespace std;
#include <string>
using namespace std;

struct Student
{
    int id;
    char name[50];
    float percentage;
};

int main()
{
    struct Student students[5];

    cout << "Enter details of 5 students:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent: " << i + 1 << endl;
        cout << "ID: ";
        cin >> students[i].id;

        cout << "Name: ";
        cin >> students[i].name;

        cout << "Percentage: ";
        cin >> students[i].percentage;
    }

    cout << "\nDetails of students:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << students[i].id << "\t|";
    }
    cout << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << students[i].name << "\t|";
    }
    cout << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << students[i].percentage << "\t|";
    }

    cout << "\n";

    return 0;
}
