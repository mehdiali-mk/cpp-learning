/*
 Aim = To demonstrate the increment and decrement operator.
 Author = Mehdiali (MK).
 Date = 24 / January / 2024 - 06:23 PM.
*/

#include <iostream>
using namespace std;

int main()
{
     int counter{10};

     cout << "Counter: " << counter << endl;

     counter = counter + 1;
     cout << "Counter: " << counter << endl;

     counter++;
     cout << "Counter: " << counter << endl;

     ++counter;
     cout << "Counter: " << counter << endl
          << endl;

     // Reset the value of counterer.
     counter = 10;
     int result{0};
     cout << "Counter: " << counter << endl;
     result = ++counter;
     cout << "Counter: " << counter << endl;
     cout << "Result: " << result << endl
          << endl;

     // Reset the value of counterer.
     counter = 10;
     result = 0;
     cout << "Counter: " << counter << endl;
     result = counter++;
     cout << "Counter: " << counter << endl;
     cout << "Result: " << result << endl
          << endl;

     // Reset the value of counterer.
     counter = 10;
     result = 0;
     cout << "Counter: " << counter << endl;
     result = ++counter + 10;
     cout << "Counter: " << counter << endl;
     cout << "Result: " << result << endl
          << endl;

     // Reset the value of counterer.
     counter = 10;
     result = 0;
     cout << "Counter: " << counter << endl;
     result = counter++ + 10;
     cout << "Counter: " << counter << endl;
     cout << "Result: " << result << endl
          << endl;
     return 0;
}