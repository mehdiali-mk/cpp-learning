#include <iostream>

using namespace std;

int main()
{

    int num1, num2;

    cout << "Enter the 1st number = ";
    cin >> num1;
    cout << "Enter the 2nd number = ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << "1st number " << num1 << " is greatest.";
    }
    else if (num1 < num2)
    {
        cout << "2nd number " << num2 << " is greatest.";
    }
    else if (num1 == num2)
    {
        cout << "1st number " << num1 << " is equal to 2nd number " << num2 << endl;
    }
    else
    {
        cout << "~~Error~~";
    }

    return 0;
}