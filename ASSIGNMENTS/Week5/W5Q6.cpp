/*
Q6) Create a Text class that stores a string.
 Store the text using a string data member.
 Overload the addition (+) operator to concatenate two Text objects.
 Overload the binary subtraction (-) operator to remove all occurrences of one string from
another string.
 Both operators should return a new Text object without modifying the original operands.
A sample driver function:
int main() {
Text t1("hello world world");
Text t2("world");
Text t3("!");
// Concatenation
Text concat = t1 + t3;

// Subtraction (remove substring)
Text removed = t1 - t2;
cout << "After concatenation: ";
concat.display();
cout << "After subtraction: ";
removed.display();
return 0;
}*/