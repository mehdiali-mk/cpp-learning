/*
 Aim = To find the area of circle and volume of cylinder by function.
 Author = Mehdiali (MK).
 Date = 05 / February / 2024 - 01:39 PM.
*/

#include <iostream>
using namespace std;

const double PI{3.14159};
void findArea();
double calcArea(double radius);
void findVolume();
double calcVolume(double radius, double height);

int main()
{
    findArea();
    findVolume();
    return 0;
}

void findArea()
{
    double radius{};
    cout << "\nEnter the radius of circle = ";
    cin >> radius;

    cout << "\nArea of circle with radius " << radius << " is = " << calcArea(radius) << endl;
}

double calcArea(double radius)
{
    return PI * radius * radius;
}

void findVolume()
{
    double radius{}, height{};

    cout << "\n\nEnter the radius of cylinder = ";
    cin >> radius;
    cout << "Enter the height of cylinder = ";
    cin >> height;

    cout << "\nVolume of cylinder with radius " << radius << " and height " << height << " is = " << calcVolume(radius, height) << endl;
}

double calcVolume(double radius, double height)
{
    return PI * radius * radius * height;
}