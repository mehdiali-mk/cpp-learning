# >>==>> DAY - 13.

# The switch statement.

- The control expression must evalute to an integer type.

- The case expression must be constant expressions that evalute to integer or integers literals.
- Once a match occurs all following case sections are executes UNTIL a break is reached the switch complete.

- Best practice - provide break statement for each case.
- Best practice - default is optional, but should be handled.

<pre>
switch (integer_control_expr) {
	case expression1: statement1; break;
	case expression2: statement2; break;
	case expression3: statement3; break;
	...
	case expressionN: statementN; break;
	default: statementDefault;
}
</pre>

# Switch with enumeration.

<pre>
enum color {
	red, green, blue
};

color screenColor {green};

switch (screenColor) {
	case red: cout << "red"; break;
	case green: cout << "green"; break;
	case blue: cout << "blue"; break;
	default: cout << "Never executed";
}
</pre>

# Conditional Operator.

- ?:
- (condExpr) ? expr1: expr2;
- condExpr evalutes to a boolean expression.

  - If condExpr is true then the value of expr1 is returned.
  - If condExpr is false then the value of expr2 is returned.

- Similar to if-else construct.
- Ternary operator.
- Very useful when used inline.
- Very easy to abuse!

# C++ Looping Constructs.

- for Loop.

  - iteration a specific number of times.

- Range-based for loop.

  - one iteration for each element in a range or collection.

- While loop.

  - Iterate while a condition remains true.
  - Stop when the condition becomes false.
  - Check the condition at the beginning of every iteration.

- do-while Loop.
  - Iterate while the condition remains true.
  - Stop whent the condition becomes false.
  - Check the condition at the end of every iteration.
