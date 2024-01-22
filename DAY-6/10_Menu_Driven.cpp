/*
 Aim = To demonstrate the menu drive.
 Author = Mehdiali (MK).
 Date = 21 / January / 2024 - 03:33 PM.
*/

#include <iostream>

using namespace std;

int main()
{
    int num1{}, num2{};
    char choice{};

    cout << "Enter the 1st number = ";
    cin >> num1;
    cout << "Enter the 2nd number = ";
    cin >> num2;

    cout << "\nENTER YOUR CHOICE OF OPERATION = ";
    cin >> choice;

    switch (choice)
    {
    case '+':
        cout << "\nThe Addition = " << num1 + num2 << endl;
        break;
    case '-':
        cout << "\nThe Subtraction = " << num1 - num2 << endl;
        break;
    case '*':
        cout << "\nThe Multiplication = " << num1 * num2 << endl;
        break;
    case '/':
        cout << "\nThe Division = " << num1 / num2 << endl;
        break;
    case '%':
        cout << "\nThe Modulus = " << num1 % num2 << endl;
        break;

    default:
        break;
    }
    return 0;
}