/*
Aim = Class and Object.
Author = Mehdiali (MK).
Date = 24 / Apr / 2024 - 07:12 PM.
*/

#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int id;
    bool gender;

    void printDetails()
    {
        cout << "\nName: " << name;
        cout << "\nId: " << id;
        cout << "\nGender: " << gender;
    }
};

int main()
{
    student studentArr[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1;
        cout << "\nEnter student name: ";
        cin >> studentArr[i].name;
        cout << "Enter student id: ";
        cin >> studentArr[i].id;
        cout << "Enter student gender: ";
        cin >> studentArr[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "\n\nDetails of Student: " << i + 1;
        studentArr[i].printDetails();
    }

    return 0;
}