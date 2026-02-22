/*Function and Operator Overloading
Q1. Write a C++ program to Swap variables of different data types using Function Overloading.
Q2. Define the Triangle class with members three integers, which correspond to the sides of a triangle
(e.g., a, b, and c). Overload the != operator, so that we can compare the perimeters of two triangles
(e.g., write a statement such as t1 != t2; to compare the perimeters of t1 and t2). Also, overload the []
operator, so that new values are assigned to the sides of the triangle (e.g., the statement t1[0] = 3;
should make the side a of the t1 object equal to 3, while the statement t1[1] = 5; should make the side
b equal to 5). Add appropriate functions in the class. Write a program that tests the functionality of
the Triangle class.
Q3. What will be the output of the following C++ code?
#include <iostream>
#include <string>
using namespace std;
class complex
{
int i;
int j;
public:
complex(int a, int b)
{

i = a;
j = b;
}
complex operator+(complex c)
{

complex temp;
temp.i = this->i + c.i;
temp.j = this->j + c.j;
return temp;
}
void show(){
cout<<"Complex Number: "<<i<<" + i"<<j<<endl;
}
};
int main(int argc, char const *argv[])

{
complex c1(1,2);
complex c2(3,4);
complex c3 = c1 + c2;
c3.show();
return 0;
}
a) 4 + i6
b) 2 + i2
c) Error
d) Segmentation fault
Q4. Given the following C++ code. How would you define the < operator for Box class so that when
boxes b1 and b2 are compared in if block the program gives correct result?
#include <iostream>
#include <string>
using namespace std;
class Box
{
int capacity;
public:
Box(){}
Box(double capacity){
this->capacity = capacity;
}
};
int main(int argc, char const *argv[])
{
Box b1(10);
Box b2 = Box(14);
if(b1 < b2){
cout<<"Box 2 has large capacity.";
}
else{
cout<<"Box 1 has large capacity.";
}
return 0;
}
Q5. What will be the output of the following C++ code? Justify
#include<iostream>
using namespace std;
class Point {
private:
int x, y;

public:
Point() : x(0), y(0) { }
Point& operator()(int dx, int dy);
void show() {cout << "x = " << x << ", y = " << y; }
};
Point& Point::operator()(int dx, int dy)
{ x = dx;
y = dy;
return *this;
}
int main()
{
Point pt;
pt(3, 2);
pt.show();
return 0;
}
Q6. What will be the output of the following C++ code? Justify
#include <iostream>
#include <string>
using namespace std;
class A
{
static int a;
public:
A()
{

cout<<"Object of A is created\n";
}
void show()
{

a++;
cout<<"a: "<<a<<endl;
}
};
class B
{
public:
};
int main(int argc, char const *argv[])
{
A a1, a2;

A a3 = a1 + a2;
return 0;
}
a) Runs perfectly
b) Run-time Error
c) Segmentation fault
d) Compile-time Error
Q7. What will be the output of the following C++ code? Justify
#include<iostream>
using namespace std;
class A
{
int i;
public
:
A(int ii = 0) : i(ii) {}
void show() { cout << i << endl; }
};
class B
{ int x;
public:
B(int xx) : x(xx) {}
operator A() const { return A(x); }
};
void g(A a)
{
a.show();
}
int main()
{
B b(10);
g(b);
g(20);
return 0;
}
Q8. You are tasked with designing a Book class to represent information about books in a library.
Implement the Book class with the following attributes:
title (string): The title of the book.
author (string): The author of the book.
publicationYear (int): The year the book was published.
Additionally, overload the << operator to allow the easy printing of a Book object.

Create a simple program that demonstrates the usage of the Book class. In the main function, declare
two Book objects and initialize them with different values. Print both Book objects using the overloaded
<< operator. Include any necessary constructors or helper functions in the Book class to achieve the
desired functionality.
Sample output
Book 1:
Title: The Great Gatsby
Author: F. Scott Fitzgerald
Publication Year: 1925
Book 2:
Title: To Kill a Mockingbird
Author: Harper Lee
Publication Year: 1960*/