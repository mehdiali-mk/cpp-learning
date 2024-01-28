/*
 Aim = To demonstrate switch case statement.
 Author = Mehdiali (MK).
 Date = 28 / January / 2024 - 03:02 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    enum Direction
    {
        left,
        right,
        up,
        down
    };

    Direction heading{left};

    switch (heading)
    {
    case left:
        cout << "Going Left!" << endl;
        break;
    case right:
        cout << "Going right!" << endl;
    case up:
        cout << "Going up!" << endl;
    case down:
        cout << "Going down!" << endl;
    default:
        cout << "Going nowhere!" << endl;
        break;
    }
    return 0;
}