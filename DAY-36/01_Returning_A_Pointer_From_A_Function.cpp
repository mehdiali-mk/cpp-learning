/*
 Aim = To demonstrate the reference of a variable.
 Author = Mehdiali (MK).
 Date = 19 / February / 2024 - 08:18 PM.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int number{100};
    int &reference{number};

    cout << "Number = " << number << endl;
    cout << "Reference = " << reference << endl;
    cout << "----------------------------" << endl;
    number += 100;
    cout << "Number = " << number << endl;
    cout << "Reference" << reference << endl;
    cout << "----------------------------" << endl;
    number += 100;
    cout << "Number = " << number << endl;
    cout << "Reference = " << reference << endl;
    cout << "----------------------------" << endl;

    vector<string> name = {"Mehdiali", "Najarhusain", "Kadiwala"};

    for (string str : name)
    {
        str = "Name";
    }

    for (string str : name)
    {
        cout << str << " ";
    }

    for (string &str : name)
    {
        str = "Myown";
    }
    cout << "\n----------------------------" << endl;
    for (string str : name)
    {
        cout << str << " ";
    }
    return 0;
}