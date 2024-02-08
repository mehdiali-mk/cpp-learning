/*
 Aim = To demonstrate pass by reference as an argument in function.
 Author = Mehdiali (MK).
 Date = 07 / February / 2024 - 06:62 PM.
*/

#include <iostream>
#include <vector>
using namespace std;

void printData(vector<int> v1);
int main()
{
    vector<int> v1{1, 2, 3, 4, 5};

    printData(v1);
    return 0;
}

void printData(vector<int> v1)
{
    for (auto val : v1)
    {
        cout << val << endl;
    }
}