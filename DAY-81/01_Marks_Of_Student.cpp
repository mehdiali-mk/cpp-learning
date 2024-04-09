/*
Aim = If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100.


Author = Mehdiali (MK).
Date = 09 / April / 2024 - 11:14 PM.
*/

#include <iostream>
using namespace std;

int main()
{

    // Variable Decleration.
    int totalSubject;
    float subject[totalSubject], totalMarks = 0;

    cout << "\nEnter the total subject = ";
    cin >> totalSubject;

    cout << endl;
    for (int i = 0; i < totalSubject; i++)
    {
        cout << "Enter the " << i + 1 << " Subject Marks = ";
        cin >> subject[i];
    }

    for (int i = 0; i < totalSubject; i++)
    {
        totalMarks = totalMarks + subject[i];
    }

    cout << "\n\nThe aggregate marks = " << totalMarks;
    cout << "\nPercentage = " << ((totalMarks / (totalSubject * 100.0)) * (100));

    return 0;
}