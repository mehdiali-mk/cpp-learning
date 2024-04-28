/*
Aim = Operator overloading.
Author = Mehdiali (MK).
Date = 27 / Apr / 2024 - 06:58 PM.
*/

#include <iostream>
using namespace std;

class Complex
{

private:
    int real, image;

public:
    Complex() {}
    Complex(int r, int i)
    {
        real = r;
        image = i;
    }

    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.image = image + obj.image;
        res.real = real + obj.real;
        return res;
    }

    void displayResult()
    {
        cout << real << " + i(" << image << ")";
    }
};

int main()
{

    int r1{}, i1{}, r2{}, i2{};

    cout << "Enter for first Complex number:";
    cout << "\nReal = ";
    cin >> r1;
    cout << "Image = ";
    cin >> i1;
    cout << "\nEnter for second Complex Number:";
    cout << "\nReal = ";
    cin >> r2;
    cout << "Image = ";
    cin >> i2;

    Complex c1(r1, i1), c2(r2, i2);
    Complex c3 = c1 + c2;

    cout << "\n\n["
         << r1 << " + i(" << i2 << ")]  +  [" << r2 << " + i(" << i2 << ")]  =  ";
    c3.displayResult();

    return 0;
}