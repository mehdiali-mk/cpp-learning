/*
 Aim = Challenge

Write a C++ program as follow:

Declare 2 empty vectors of integers named
vector1 and vector2 respectively.

Add 10 and 20 to vector 1 dynamically using push_back().
Display the elements in vector1 using the at() method as well as its size using the size() method.

Add 100 and 200 to vector2 dynamically using push_back().
Display the elements in vector2 using the at() method as well as its size using the size() method.

Declare an empth 2D vector called vector2D.
Remember, that a 2D vector is a vector of vector<int>.

Add vector1 to vector2D dynamically using push_back.
Add vector2 to vector2D dynamically using push_back.

Display the elements in vector2D using the at() method.

Change vector1.at(0) to 1000.

Display the elements in vector2D again using the at() method.

Display the elements in vector1.


 Author = Mehdiali (MK).
 Date = 22 / January / 2024 - 11:04 AM.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Vector1:\nat(0) = " << vector1.at(0) << endl;
    cout << "at(1) = " << vector1.at(1) << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nVector2:\nat(0) = " << vector2.at(0) << endl;
    cout << "at(1) = " << vector2.at(1) << endl;

    vector<vector<int>> vector2D;

    vector2D.push_back(vector1);
    vector2D.push_back(vector2);

    cout << "\nVector2D:" << endl;
    cout << "at(0)(0) = " << vector2D.at(0).at(0) << endl;
    cout << "at(0)(1) = " << vector2D.at(0).at(1) << endl;
    cout << "at(1)(0) = " << vector2D.at(1).at(0) << endl;
    cout << "at(1)(1) = " << vector2D.at(1).at(1) << endl;

    vector1.at(0) = 100;

    cout << "\nVector2D:" << endl;
    cout << "at(0)(0) = " << vector2D.at(0).at(0) << endl;
    cout << "at(0)(1) = " << vector2D.at(0).at(1) << endl;
    cout << "at(1)(0) = " << vector2D.at(1).at(0) << endl;
    cout << "at(1)(1) = " << vector2D.at(1).at(1) << endl;

    cout << "\nVector1:\nat(0) = " << vector1.at(0) << endl;
    cout << "at(1) = " << vector1.at(1) << endl;

    return 0;
}
