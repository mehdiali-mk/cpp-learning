# >>==>> DAY - 2

# Compiler Errors

- Programming languages have some rules.

  - Syntax Errors - Something wrong with the structure.
    e.g std::cout << "Errors << std::endl;
    return 0

  - Semantic Errors - Something wrong with the meaning.
    e.g a + b; When it doesn't make sense to add a and b.

---

# Compiler Warnings

Do NOT ignore them!

- The compiler has recognized an issue with your code that could lead to a potential problem.
- It's only warning because the compiler is still able to generate correct machine code.

int yourAge;
std::cout << yourAge;

warning: 'yourAge' is used uninitialized...

# The structure of C++ Program.

- Basic Components.
- Preprocessor Directives.
- The main Function.
- Namespaces.
- Comments.
- Basic I/O.

# The main() function.

- Every C++ program must have exactly 1 main() function.
- Starting point of program execution.
- Return 0 indicates successful program execution.
- 2 versions that are both valid.

<pre>
int main()
{
  // code
  return 0;
}

int main(int argc, char *argv[])
{
  // code
  return 0;
}
</pre>
