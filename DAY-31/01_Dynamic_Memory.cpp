/*
 Aim = To demonstrate dynamic memory allocation.
 Author = Mehdiali (MK).
 Date = 15 / February / 2024 - 7:55 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int *ptr{nullptr};

    ptr = new int;

    cout << "*ptr = " << *ptr;

    size_t size{0};
    double *temperaturePtr{nullptr};
    cout << "\nHow many temperature do you want to enter = ";
    cin >> size;

    temperaturePtr = new double[size];

    cout << "\ntemperaturePtr = " << temperaturePtr;

    delete[] temperaturePtr;
    cout << "\ntemperaturePtr = " << temperaturePtr;

    int score[] = {100, 55, 85};

    cout << "\n\nscore = " << score;

    int *scorePtr{score};
    cout << "\nscorePtr = " << scorePtr;

    cout << "\nArray subscript notation----------" << endl;
    cout << score[0] << endl;
    cout << score[1] << endl;
    cout << score[2] << endl;

    cout << "\nPointer subscript notation-----------" << endl;
    cout << scorePtr[0] << endl;
    cout << scorePtr[1] << endl;
    cout << scorePtr[2] << endl;

    cout << "\nArray offset notation---------" << endl;
    cout << *score << endl;
    cout << *(score + 1) << endl;
    cout << *(score + 2) << endl;

    cout << "\nPointer subscript notation--------" << endl;
    cout << *(scorePtr) << endl;
    cout << *(scorePtr + 1) << endl;
    cout << *(scorePtr + 2) << endl;

    cout << endl;

    return 0;
}