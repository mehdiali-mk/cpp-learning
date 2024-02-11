# >>==>> DAY - 27.

# Inline Function.

e.g.

inline int addNumbers(int a, int b) {
return a + b;
}

int main() {
int result{0};
result = addNumbers(100,200);
return 0;
}

# Recursive Functions.

- A recursive function is a function that calls itself.

  - Either directly or indirectly through another function.

- Recursive problem solving.

  - Base case.
  - Divide the rest of problems into subproblem and do recursive call.

- There are many problems that lend themselves to recursive solutions.

- Mathematic - Factorial, Fibonacci, Fractals.....

- Searching and sorting - Binary Search, Search trees...

# Important notes.

- If recursive doesn't eventually stop you will have infinite recursion.

- Recursion can be resource intensive.

- Remember the base case(s).

  - It terminates the recursion.

- Only use recursive solutions when it makes sense.

- Anything that can be done recursively can be done iteratively.
  - Stack overflow error.
