/*
 Aim = Random number generator.
 Author = Mehdiali (MK).
 Date = 04 / February / 2024 - 0:11 PM.
*/

#include <iostream>
#include <cstdlib> // required of rand().
#include <ctime>   // required for time().
using namespace std;

int main()
{
    int randomNumber{};
    size_t count{10};
    int minLimit = 1;
    int maxLimit = 10;

    cout << "Radom limit in system = " << RAND_MAX << endl;
    srand(time(nullptr));

    cout << "\nRandom Number = ";
    for (size_t i{1}; i <= count; i++)
    {
        randomNumber = rand() % maxLimit + minLimit;
        cout << " " << randomNumber << " ";
    }

    return 0;
}