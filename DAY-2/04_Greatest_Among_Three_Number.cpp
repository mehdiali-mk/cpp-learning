#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter the 1st number = ";
    cin >> num1;
    cout << "Enter the 2nd number = ";
    cin >> num2;
    cout << "Enter the 3rd number = ";
    cin >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << "1st number " << num1 << " is greatest.";
        }
        else
        {
            cout << "3rd number " << num3 << " is greatest.";
        }
    }
    else
    {
        if (num2 > num3)
        {
            cout << "2nd number " << num2 << " is greatest.";
        }
        else
        {
            cout << "3rd number " << num3 << " is greatest.";
        }
    }

    return 0;
}