/*
Aim = Structure
Author = Mehdiali (MK).
Date = 01 / May / 2024 - 09:14 PM.
*/

#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float height;
};

int main()
{
    struct Person person1 = {"Mehdiali", 16, 98.6};

    cout << "Details of person1:\n";
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << endl;

    return 0;
}