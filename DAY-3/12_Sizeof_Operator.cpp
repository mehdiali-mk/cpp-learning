/*
Aim = To demonstrate sizeof Operator.
Author = Mehdiali (MK).
Date = 18 / January / 2024 - 02:23 PM.
*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
     cout << "Size of int = " << sizeof(int) << " bytes" << endl;
     cout << "Size of short = " << sizeof(short) << " bytes" << endl;
     cout << "Size of long = " << sizeof(long) << " bytes" << endl;
     cout << "Size of long long = " << sizeof(long long) << " bytes" << endl;
     cout << "Size of unsigned int = " << sizeof(unsigned int) << " bytes" << endl;
     cout << "Size of char = " << sizeof(char) << " bytes" << endl
          << endl;

     cout << "Size of float = " << sizeof(float) << " bytes" << endl;
     cout << "Size of double = " << sizeof(double) << " bytes" << endl;
     cout << "Size of long double = " << sizeof(long double) << " bytes" << endl
          << endl;

     cout << "Minimum Values:" << endl;
     cout << "int = " << INT_MIN << endl;
     cout << "long = " << LONG_MIN << endl;
     cout << "long long = " << LONG_LONG_MIN << endl;
     cout << "short = " << SHRT_MIN << endl
          << endl;

     int age{17};

     cout << "Size of age = " << sizeof(age) << " bytes." << endl;
     cout << "Size of age = " << sizeof age << " bytes." << endl
          << endl;

     float price{99.99};

     cout << "Size of price = " << sizeof(price) << " bytes." << endl;
     cout << "Size of price = " << sizeof price << " bytes." << endl
          << endl;

     return 0;
}