/*
 Aim = To demonstrate the array.
 Author = Mehdiali (MK).
 Date = 20 / January / 2024 - 02:15 PM.
*/

#include <iostream>

using namespace std;

int main()
{
    int testScore[]{100, 95, 92, 87, 88};

    cout << "testScore[0] = " << testScore[0] << endl;
    cout << "testScore[1] = " << testScore[1] << endl;
    cout << "testScore[2] = " << testScore[2] << endl;
    cout << "testScore[3] = " << testScore[3] << endl;
    cout << "testScore[4] = " << testScore[4] << endl;

    cout << "\nEnter the testScore to [5] = ";
    cin >> testScore[0];
    cin >> testScore[1];
    cin >> testScore[2];
    cin >> testScore[3];
    cin >> testScore[4];

    cout << "\ntestScore[0] = " << testScore[0] << endl;
    cout << "testScore[1] = " << testScore[1] << endl;
    cout << "testScore[2] = " << testScore[2] << endl;
    cout << "testScore[3] = " << testScore[3] << endl;
    cout << "testScore[4] = " << testScore[4] << endl;

    return 0;
}