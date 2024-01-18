# >>==>> DAY - 3

# What is a variable?

- A variable is an abstraction for a memory location.
- Allow programmers to use meaningful names and not memory addresses.
- Variables have.

  - Type - Their category (integer, real number, string, Person, Account, .....)
  - Value - The contents (10, 3.14, "Mehdiali"...).

- Variables must be declared before they are used.
- A variables value may change.

e.g.
int age;
age = 21;

# Rules For Naming Variables.

- Can Contain letters, numbers, and underscores.
- Must begin with a letter or underscore.
- Cannot begin with a number.
- Cannot use C++ reserved keywords.
- Cannot redeclare a name in the same scope.
- Remember that C++ is case sensitive.

# Initializing variables.

- int age; // uninitialized.
- int age = 21; // C-like initialization.
- int age (21); // Constructor initialization.
- int age {21}; // C++11 list initialization syntax.

# Global and Local Variables.

- Global Variables:

1. Declared outside of any function or block, typically at the beginning of a program.
2. Have a global scope, meaning they can be accessed by any function in the program including the main function.
3. Exist throughout the entire program's execution, from the point of declaration to the end of the program.
4. Can be accessed and modified by any part of the program.

- Local Variables:

1. Declared within a specific function or block, and their scope is limited to that function or block.
2. Exist only during the execution of the function or block in which they are declared.
3. Cannot be accessed or modified by other functions outside their scope.
4. Different functions can have local variables with the same name, and they won't interfere with each other.

# C++ Premitive Data Types.

- Fundamental data types implemented directly by the C++ Language.

- Character types.
- Integer types.
  - signed and unsigned.
- Floating-Point types.
- Boolean types.

- Size and precision is often compiler-dependent.
  - include <climits>
