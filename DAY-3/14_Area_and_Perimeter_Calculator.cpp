/*
 Aim = To demonstrate area and perimeter calculator.
 Author = Mehdiali (MK).
 Date = 18 / January / 2024 - 03:52 PM.
*/

#include <iostream>

using namespace std;

#define PI 3.14

int main()
{
    int choice{};

    cout << "\n\nPRESS THE NUMBER OF YOUR CHOICE" << endl;
    cout << "1 = Area and Perimeter of Square." << endl;
    cout << "2 = Area and Perimeter of Rectangle." << endl;
    cout << "3 = Area of Triangle." << endl;
    cout << "4 = Perimeter of Triangle." << endl;
    cout << "5 = Area and Circumference of Circle." << endl;
    cout << "6 = Area of Parallelogram." << endl;
    cout << "7 = Perimeter of Parallelogram." << endl;
    cout << "8 = Area of Trapezium." << endl;
    cout << "9 = Area of Rhombus." << endl
         << endl;

    cout << "PLEASE ENTER THE YOUR CHOICE = ";
    cin >> choice;

    int side{};
    int length{}, breadth{};
    int base{}, height{};
    int side1{}, side2{}, side3{};
    float radius{};
    int diagonal1{}, diagonal2{};

    switch (choice)
    {
    case 1:

        cout << endl
             << "Enter the side = ";
        cin >> side;

        cout << endl
             << "Area of 'Square' = " << side * side << endl;
        cout << "Perimeter of 'Square' = " << 4 * side << endl;
        break;
    case 2:

        cout << endl
             << "Enter the 'Length' of Rectangle = ";
        cin >> length;
        cout << "Enter the 'Breadth' of Rectangle = ";
        cin >> breadth;

        cout << endl
             << "Area of 'Rectangle' = " << length * breadth << endl;
        cout << "Perimeter of 'Rectangle' = " << 2 * (length + breadth) << endl;
        break;

    case 3:

        cout << endl
             << "Enter the 'Base' of Triangle = ";
        cin >> base;
        cout << endl
             << "Enter the 'Height' of Triangle = ";
        cin >> height;

        cout << endl
             << "Area of 'Triangle' = " << 0.5 * base * height;
        break;

    case 4:

        cout << endl
             << "Enter the '1st Side' of Triangle = ";
        cin >> side1;
        cout << endl
             << "Enter the '2nd Side' of Triangle = ";
        cin >> side2;
        cout << endl
             << "Enter the '3rd Side' of Triangle = ";
        cin >> side3;

        cout << endl
             << "Perimeter of 'Triangle' = " << side1 + side2 + side3;
        break;

    case 5:

        cout << endl
             << "Enter the 'Radius' of Circle = ";
        cin >> radius;

        cout << endl
             << "Area of 'Circle' = " << PI * radius * radius;
        cout << endl
             << "Perimeter of 'Circle' = " << 2 * PI * radius;
        break;

    case 6:

        cout << endl
             << "Enter the 'Base' of Parallelogram = ";
        cin >> base;
        cout << "Enter the 'Height' of Parallelogram = ";
        cin >> height;

        cout << endl
             << "Area of Parallelogram = " << base * height;
        break;

    case 7:

        cout << endl
             << "Enter the two adjacent side of Parallelogram:";
        cout << "Enter the '1st Side' of Parallelogram = ";
        cin >> side1;
        cout << "Enter the '2nd Side' of Parallelogram = ";
        cin >> side2;

        cout << endl
             << "Perimeter of 'Parallelogram' = " << 2 * (side1 + side2);
        break;

    case 8:

        cout << endl
             << "Enter the '1st Parallel Side' of Trapezium = ";
        cin >> side1;
        cout << "Enter the '2nd Parallel Side' of Trapezium = ";
        cin >> side2;
        cout << "Enter the 'Height' of Trapezium = ";
        cin >> height;

        cout << endl
             << "Area of 'Trapezium' = " << 0.5 * (side1 + side2) * height;
        break;

    case 9:

        cout << endl
             << "Enter the '1st Diagonal' of Rhombus = ";
        cin >> diagonal1;
        cout << "Enter the '2nd Diagonal' of Rhombus = ";
        cin >> diagonal2;

        cout << endl
             << "Area of 'Rhombus' = " << 0.5 * diagonal1 * diagonal2;
        break;

    default:
        cout << endl
             << "Please ENTER the correct choice." << endl
             << "Rerun the program.";
        break;
    }
    return 0;
}