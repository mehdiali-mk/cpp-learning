# >>==>> DAY - 14.

# for Loop.

<pre>
for (initialization; condition; increment)
    statement;

for (initialization; condition; increment) {
    statement(s);
}
</pre>

e.g.

<pre>
int i {0};

for (i = 1; i <= 5; i++) 
	cout << i << endl;
</pre>

- output.
  1
  2
  3
  4
  5

Array example.

<pre>
int scores [] {100, 90, 87};

for (int i {0}; i < 3; ++i) {
	cout << scores[i] << endl;
}

for (int i {0}; i <= 2; ++i) {
	cout << scores[i] << endl;
}
</pre>

# Some other details...

The basic for loop is very clear and concise.
Since the for loop's expressions are all optional, it is possible to have:

- no initialization.
- no test.
- no increment.

e.g.
for (;;)
cout << "Endless loop" << endl;

# Range-based for Loop.

Introduced in C++11.

<pre>
for (varType varName: sequence) {
statement; // can use varName.

for (varType varName: sequence) {
statements; // can use varName.
}
</pre>
