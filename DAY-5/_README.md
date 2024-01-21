# >>==>> DAY - 5

# What is an array?

- Compound data type or data structure.
  - Collection of elements.
- All elements are of the same data type.
- Each element can be accessed directly.

# Characteristics of Arrays.

- Fixed size.
- Elements are all the same type.
- Stored contiguously in memory.
- Individual elements can be accessed by their position or index.
- First element is at index 0.
- Last element is at index size-1.
- No checking to see if you are out of bounds.
- Always initialize arrays.
- Very efficient.
- Iteration (Looping is often used to process).

# Declaring Arrays.

- Element_Type array_name [constant number of elements];

e.g.

- int testScores [5];
- int highScorePerLevel [10];
- const int daysInYear {365};
- double temperatureOnEachDay [daysInYear];

# Initialization of Arrays.

- Element_Type array_name [number of elements] {init list};

e.g.

- int testScore [5] {100, 95, 99, 87, 88};
- int highScorePerLevel [10] {3, 5}; // Init to 3, 5 and remaning to 0.
- const double daysInYear {365};
- double highTemperature [daysInYear] {0}; // Init all to zero.
- int anotherArray [] {1,2,3,4,5}; // Size automatically calculated.

# Accessing array elements.

- array_name [element_index];

- e.g. testScore[1];

e.g.

- int testScore [5] {100, 95, 99, 87, 88};
- cout << "1st score at index 0: " << testScore[0] << endl;
- cout << "2nd score at index 1: " << testScore[1] << endl;
- cout << "3rd score at index 2: " << testScore[2] << endl;
- cout << "4th score at index 3: " << testScore[3] << endl;
- cout << "5th score at index 4: " << testScore[4] << endl;

# Changing the contents of array elements.

- array_name [element_index];

e.g.

- int testScore [5] {100, 95, 99, 87, 88};

- cin >> testScore[0];
- cin >> testScore[1];
- cin >> testScore[2];
- cin >> testScore[3];
- cin >> testScore[4];

- testScore[0] = 90; // assignment statement,

# Declaring multi-dimensional arrays.

- Element_Type array_name [dim1_size] [dim2_size];

- e.g. int movieRating [3] [4];

# Initializing multi-dimensional arrays.

- e.g.
<pre> 
  int movieRating [3] [4]
  {
    {0, 4, 3, 5},
    {2, 3, 3, 5},
    {1, 4, 4, 5}
  };
</pre>
