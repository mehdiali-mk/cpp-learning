# >>==>> DAY - 9

# Increment operator ++

Decrement Operator --

Increments or decrements its operand by 1.
Can be used with integers, floating point types and pointers.

Prefix ++num
Postfix num++

Don't overuse this operator!
ALERT !! Never use it twice for the same variable in the same statement!!

# Mixed Type Expressions.

- C++ operations occur on same type operands.
- If Operands are of different types, C++ will convert one.
- Important! since it could affect calculation results.
- C++ will attempt to automatically convert types (coercion).
- If it can't, a compiler error will occur.

# Conversions

- Higher VS Lower types are based on the size of the value the type can hold.
- long double, double, float, unsigned long, long, unsigned int, int.
- short and char types are always converted to int.

- Type Coercion: Conversion of one operand to another data type.
- Promotion: conversion to a higher type.
- Used in mathematical expressions.
- Demotion: conversion to a lower type.
- Used with assignment to lower type.

E.g.

- Lower op higher the lower is promoted to a higher.
- 2 \* 5.2.
- 2 is promoted to 2.0

- lower = higher; The higher is demoted to a lower.
- int num{0};
- num = 100.2;

# Explict Type Casting - static_cast<type>

int totalAmount{100};
int totalNumber{8};
double average {0.0};

average = totalAmount / totalNumber;
cout << average << endl; // Display 12.

average = static_cast<double>(totalAmount) / totalNumber;
cout << average << endl; // Display 12.5.
