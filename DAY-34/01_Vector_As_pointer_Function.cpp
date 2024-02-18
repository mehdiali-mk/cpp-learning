/*
 Aim = To demonstrate the vector as pointer in functions.
 Author = Mehdiali (MK).
 Date = 17 / February / 2024 - 08:07 PM.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void displayVecotr(vector<string> *vectorPtr)
{
    cout << endl;
    for (auto str : *vectorPtr)
    {
        cout << str << endl;
    }
    cout << endl;
}

int main()
{
    vector<string> myName = {"Mehdiali", "Najarhusain", "Kadiwala"};
    displayVecotr(&myName);

    return 0;
}
